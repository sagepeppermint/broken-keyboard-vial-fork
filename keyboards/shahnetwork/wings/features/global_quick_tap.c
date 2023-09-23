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
    uint16_t quick_tap_ms = get_global_quick_tap_ms(keycode);
    

    
    
    if (record->event.pressed) { // on keydown

        /* Any key down. Recording key press times */
        uint16_t time_diff = record->event.time - prev_press_time;
        prev_press_time = record->event.time;
        
        switch (keycode) {
		case LT(4, KC_BSPC):
            gqt_state.disabled = true;
            dprintf("Disabling Global-quick-tap for 0x%04X\n", keycode);
            break;
	    }
        
        if (!gqt_state.disabled) {
            if (quick_tap_ms > 0) { // only apply to keys with defined global quick tap time
                dprintf("Global-quick-tap: Last key press was %dms ago, global_quick_tap is %dms.\n", time_diff, quick_tap_ms);
                if (quick_tap_ms > time_diff) { // pressed fast during typing
                    dprintf("Disabling hold-tap for 0x%04X\n", keycode);
                    register_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
                    gqt_state.key_registered = true;
                    return false; // halt further processing, this is why capsword doenst work....
                } else { // pressed slow enough to register
                    dprintf("Hold-taps and mod combos are allowed for key 0x%04X\n", keycode);
                    gqt_state.disabled = true; // disable global quick tap whilst a key is held
                }
                gqt_state.keycode = keycode;
            }
        }
    }
     
    else { // on keyup
    
        switch (keycode) {
		case LT(4, KC_BSPC):
			reset_global_quick_tap_state();
			break;
	    }
	    
        if (quick_tap_ms > 0) {
            dprintf("Unregister  key 0x%04X\n", keycode);
            unregister_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
            reset_global_quick_tap_state();  
        }
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
