// CAPS_WORD_LOCK: A "smart" Caps Lock key that only capitalizes the next identifier you type
// and then toggles off Caps Lock automatically when you're done.
bool caps_word_lock_on;

void caps_word_lock_enable(void) {
    caps_word_lock_on = true;
    if (!(host_keyboard_led_state().caps_lock)) {
        tap_code(KC_CAPS);
    }
}

void caps_word_lock_disable(void) {
    caps_word_lock_on = false;
    unregister_mods(MOD_MASK_SHIFT);
    if (host_keyboard_led_state().caps_lock) {
        tap_code(KC_CAPS);
    }
}

/* inline uint8_t get_tap_kc(uint16_t dual_role_key) {
    // Used to extract the basic tapping keycode from a dual-role key.
    // Example: get_tap_kc(MT(MOD_RSFT, KC_E)) == KC_E
    return dual_role_key & 0xFF;
} */

static void process_caps_word_lock(uint16_t keycode, const keyrecord_t *record) {
    // Update caps word state
    if (caps_word_lock_on) {
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
                // Earlier return if this has not been considered tapped yet
                if (record->tap.count == 0) { return; }
                // Get the base tapping keycode of a mod- or layer-tap key
                keycode = QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
                break;
            default:
                break;
        }

        switch (keycode) {
            // Keycodes to shift
            case KC_A ... KC_Z:
                if (record->event.pressed) {
                    if (get_oneshot_mods() & MOD_MASK_SHIFT) {
                        caps_word_lock_disable();
                        add_oneshot_mods(MOD_MASK_SHIFT); // if OSM-shift, disable caps word but allow OSM for next letter
                    }
                }
                break;
            // Keycodes that enable caps word but shouldn't get shifted
            case KC_1 ... KC_0:
            case KC_MINS:
            case KC_EQL:
            case KC_BSPC:
            case KC_DEL:
            case KC_SLASH:
            case KC_BSLS:
            case CAPS_WORD_LOCK:
                // If chording mods, disable caps word
                // if (record->event.pressed && (get_mods() != MOD_LSFT) && (get_mods() != 0)) {
                //     caps_word_lock_disable();
                // }
                break;
            default:
                // Any other keycode should automatically disable caps
                if (record->event.pressed && !(get_oneshot_mods() & MOD_MASK_SHIFT)) {
                    caps_word_lock_disable();
                }
                break;
        }
    }
}

bool process_caps_word_lock_shortcuts(uint16_t keycode, keyrecord_t* record) {
    
    if (!caps_word_lock_on){
        
        // Double tapping left or right shift turns on Caps Word Lock. This also seems to work with OSM of both LSFT and RSFT
        if (record->event.pressed) {
            static bool     tapped = false;
            static uint16_t timer  = 0;
            if (keycode == KC_LSFT || keycode == KC_RSFT || keycode == OSM(MOD_LSFT)) {
                if (tapped && !timer_expired(record->event.time, timer)) {
                    // Left shift was double tapped, activate Caps Word.
                    caps_word_lock_enable();
                }
                tapped = true;
                timer  = record->event.time + GET_TAPPING_TERM(keycode, record);
            } else {
                tapped = false; // Reset when any other key is pressed.
            }
        }

    }

    return true;
}