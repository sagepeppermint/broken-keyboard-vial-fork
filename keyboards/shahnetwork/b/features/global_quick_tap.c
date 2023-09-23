#include "global_quick_tap.h"


static struct {
    uint16_t keycode;
    bool disabled;
    bool key_registered;
} gqt_state = {0, false, false};

void reset_global_quick_tap_state(void) {
    gqt_state.keycode = 0;
    gqt_state.disabled = false;
    gqt_state.key_registered = false;
}

static uint16_t prev_press_time = 0;

bool process_global_quick_tap(uint16_t keycode, keyrecord_t* record) {

    if (record->event.key.row % (MATRIX_ROWS / 2) >= 4) { // disable bottom rows in a split keyboard
        dprintln("Global-quick-tap: skip bottom rows"); 
        return true; 
        }
        
    if (record->event.pressed) { // on keydown

        /* Any key down. Recording key press times */
        uint16_t time_diff = record->event.time - prev_press_time;
        prev_press_time = record->event.time;

        if (!gqt_state.disabled) {
            uint16_t quick_tap_ms = get_global_quick_tap_ms(keycode);
            if (quick_tap_ms > 0) {
                dprintf("Global-quick-tap: Last key press was %dms ago, global_quick_tap is %dms. ", time_diff, quick_tap_ms);
                if (quick_tap_ms > time_diff) {
                    dprintf("Disabling hold-tap for 0x%04X\n", keycode);
                    register_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
                    gqt_state.key_registered = true;
                    return false;
                } else {
                    dprintf("Hold-taps and mod combos are allowed for key 0x%04X\n", keycode);
                    gqt_state.disabled = true;
                }
                gqt_state.keycode = keycode;
                
            }
        }

    } 
    else { // on keyup
    unregister_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
    reset_global_quick_tap_state();   
    }

    return true;
};

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
