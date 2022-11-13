#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_5x7(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS,
                KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC,
                KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LCBR,
                KC_RCBR, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRV,
                KC_BSLS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        
        KC_LCTL, KC_LGUI, KC_LALT, KC_HOME, KC_PGUP, KC_ENT, MO(1),
                KC_PGDN, KC_END, MO(2), KC_SPC, KC_RALT, KC_RGUI, KC_RCTL
        
    ),

    [1] = LAYOUT_5x7(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,                
        
        QK_BOOTLOADER, QK_CLEAR_EEPROM, _______, KC_UP, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,                
        
        _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,                
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,                
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______                
        
    )
};

/*        KC_LCTL, KC_LGUI, KC_LALT, KC_1, KC_2, KC_3, KC_4,
                KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7
                
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	
_______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______,                
                */
                

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
	    // Host Keyboard Layer Status
	    oled_write_P(PSTR("Layer: "), false);

	    switch (get_highest_layer(layer_state)) {
		case 0:
		    oled_write_P(PSTR("Base\n"), false);
		    break;
		case 1:
		    oled_write_P(PSTR("1\n"), false);
		    break;
		case 2:
		    oled_write_P(PSTR("2\n"), false);
		    break;
		default:
		    // Or use the write_ln shortcut over adding '\n' to the end of your string
		    oled_write_ln_P(PSTR("Undefined"), false);
	    }

	    // Host Keyboard LED Status
	    led_t led_state = host_keyboard_led_state();
	    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
	    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
	    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
	    
	    return false;
    } else {
	    oled_write_P(PSTR("Broken Keyboard\nSHAHNETWORK"), false);
            oled_scroll_left();  // Turns on scrolling
    }
    return false;
}
#endif
