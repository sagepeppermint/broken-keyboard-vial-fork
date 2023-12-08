#include "global_quick_tap.h"


static struct {
    bool disabled;
    bool key_registered;
    bool double_pressed
} gqt_state = {false, false, false};

void reset_global_quick_tap_state(void) {
    gqt_state.disabled = false;
    gqt_state.key_registered = false;
    gqt_state.double_pressed = false;
}

static uint16_t prev_press_time = 0;

bool process_global_quick_tap(uint16_t keycode, keyrecord_t* record) {

    if (record->event.key.row % (MATRIX_ROWS / 2) >= 4) { // disable bottom rows in a split keyboard
        dprintln("Global-quick-tap: skip bottom rows"); 
        return true; 
    }

    uint16_t quick_tap_ms = get_global_quick_tap_ms(keycode);

    if (record->event.pressed) { // on keydown

        /* Any key down. Recording key press times */
        uint16_t time_diff = record->event.time - prev_press_time;
        prev_press_time = record->event.time;

        if (quick_tap_ms > 0) {
            dprintf("Global-quick-tap: Last key press was %dms ago, global_quick_tap is %dms.", time_diff, quick_tap_ms);
            if ((quick_tap_ms > time_diff) && !gqt_state.disabled) {
                dprintf("Disabling hold-tap for 0x%04X\n", keycode);
                register_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
                gqt_state.key_registered = true;
                return false;
            } else {
                dprintf("Hold-taps and mod combos are allowed for key 0x%04X\n", keycode);
                if (!gqt_state.disabled){gqt_state.disabled = true};
                if (gqt_state.disabled){gqt_state.double_pressed = true};
            }
        }
    }
    else { // on keyup
        if (quick_tap_ms > 0) {
            if (gqt_state.key_registered){
                dprintf("Unregister key 0x%04X\n", keycode);
                unregister_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
                gqt_state.key_registered = false;
            }
            if (gqt_state.disabled && !gqt_state.double_pressed){
                gqt_state.disabled = false;
            }
            if (gqt_state.double_pressed){
                gqt_state.double_pressed = false;
            }
            
//            reset_global_quick_tap_state();
        }
    }

    return true;
}

__attribute__((weak))
uint16_t get_global_quick_tap_ms(uint16_t keycode) {
    switch (keycode) {
        /* Example: KEYCODE will not be considered for hold-tap if the last key press was less than 150ms ago */
        /* case KEYCODE: */
        /*     return 150; */
        default:
            return 0;  // global_quick_tap is not applied
    }
}
