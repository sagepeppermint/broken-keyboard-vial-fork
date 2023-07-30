#include QMK_KEYBOARD_H

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
	{{6,5}, {5,5}, {4,5}, {3,5}, {2,5}, {1,5}, {0,5}},
	{{6,6}, {5,6}, {4,6}, {3,6}, {2,6}, {1,6}, {0,6}},
	{{6,7}, {5,7}, {4,7}, {3,7}, {2,7}, {1,7}, {0,7}},
	{{6,8}, {5,8}, {4,8}, {3,8}, {2,8}, {1,8}, {0,8}},
	{{6,9}, {5,9}, {4,9}, {3,9}, {2,9}, {1,9}, {0,9}},
	{{6,0}, {5,0}, {4,0}, {3,0}, {2,0}, {1,0}, {0,0}},
	{{6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {1,1}, {0,1}},
	{{6,2}, {5,2}, {4,2}, {3,2}, {2,2}, {1,2}, {0,2}},
	{{6,3}, {5,3}, {4,3}, {3,3}, {2,3}, {1,3}, {0,3}},
	{{6,4}, {5,4}, {4,4}, {3,4}, {2,4}, {1,4}, {0,4}},
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_5x7( // DWARF WIN
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINUS,
				KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
		
		KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V, XXXXXXX,
				XXXXXXX, KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BACKSPACE,
		
		OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M, KC_PAGE_UP,
				XXXXXXX, KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,
		
		KC_LSPO, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_PAGE_DOWN,
				XXXXXXX, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_RSPC,
		
		KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, XXXXXXX, LT(4, KC_BSPC), LT(5, KC_ENT),
				LT(7, KC_TAB), LT(6, KC_SPACE), XXXXXXX, XXXXXXX, KC_RALT, KC_RGUI, KC_RCTL
		
	),
	
	[1] = LAYOUT_5x7( // QWERTY WIN
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINUS,
				KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
		
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, XXXXXXX,
				XXXXXXX, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSPACE,
		
		OSM(MOD_LCTL), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_PAGE_UP,
				XXXXXXX, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,
		
		KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PAGE_DOWN,
				XXXXXXX, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSPC,
		
		KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, XXXXXXX, LT(4, KC_BSPC), LT(5, KC_ENT),
				LT(7, KC_TAB), LT(6, KC_SPACE), XXXXXXX, XXXXXXX, KC_RALT, KC_RGUI, KC_RCTL
		
	),
 
	[2] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
	
	[3] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
 
	[4] = LAYOUT_5x7( // Left 1
		_______, _______, _______, _______, _______, _______, _______,
				_______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
		
		KC_CAPS, _______, _______, _______, _______, _______, _______,
				_______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
				
		KC_ESC, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), _______, _______,
				_______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,
		
		KC_LSFT, _______, _______, _______, _______, _______, _______,
				_______, _______, KC_BACKSPACE, KC_DEL, KC_ENT, _______, KC_RSFT,
		
		_______, _______, _______, _______, _______, _______, _______,
				KC_TAB, KC_SPACE, _______, _______, _______, _______, _______
		
	),

 
	[5] = LAYOUT_5x7( // Left 2
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, DF(0), DF(1), DF(2), DF(3), _______,
		
		_______, _______, _______, _______, _______, _______, _______,
				_______, KC_PSCR, KC_F1, KC_F2, KC_F3, KC_F4, _______,
				
		_______, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), _______, _______,
				_______, KC_SCRL, KC_F5, KC_F6, KC_F7, KC_F8, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
				_______, KC_PAUS, KC_F9, KC_F10, KC_F11, KC_F12, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
				KC_TAB, KC_SPACE, _______, _______, _______, _______, _______
		
	),


	  [6] = LAYOUT_5x7( // Right 1
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		KC_CAPS, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, _______,
				_______, _______, _______, _______, _______, _______, _______,
				
		KC_ESC, KC_GRV, KC_4, KC_5, KC_6, KC_EQL, _______,
				_______, _______, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,
		
		KC_LSFT, KC_SLSH, KC_1, KC_2, KC_3, KC_BSLS, _______,
				_______, _______, _______, _______, _______, _______, KC_RSFT,
		
		_______, _______, _______, _______, _______, KC_0, KC_MINS,
				_______, _______, _______, _______, _______, _______, _______
		
	),


	  [7] = LAYOUT_5x7( // Right 2
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, KC_LCBR, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RCBR, _______,
				_______, _______, _______, _______, _______, _______, _______,
				
		_______, KC_TILDE, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_PLUS, _______,
				_______, _______, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,
		
		_______, KC_QUESTION, KC_EXCLAIM, KC_AT, KC_HASH, KC_PIPE, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, KC_RIGHT_PAREN, KC_UNDERSCORE,
				_______, _______, _______, _______, _______, _______, _______
		
	),

 
	[8] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),

  
	[9] = LAYOUT_5x7( // FUNCTION
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_UNDS,
				KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
				
		_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS,
				KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, _______,
		
		_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11,
				KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______
		
	),

 
	[10] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),

  
	[11] = LAYOUT_5x7( 
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
	

	 [12] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
	

	  [13] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),


	  [14] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
	

	  [15] = LAYOUT_5x7(
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
		
	),
  

};

// Workaround for https://github.com/qmk/qmk_firmware/issues/16406
void suspend_wakeup_init_user(void) {
	NVIC_SystemReset();
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	if (!is_keyboard_left()) {
		return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
	}

	return rotation;
}

bool oled_task_user(void) {
	if (is_keyboard_left()) {
		// Host Keyboard Layer Status
		oled_write_P(PSTR("Layer: "), false);

		switch (get_highest_layer(layer_state)) {
		case 0:
			oled_write_P(PSTR("0\n"), false);
			break;
		case 1:
			oled_write_P(PSTR("1\n"), false);
			break;
		case 2:
			oled_write_P(PSTR("2\n"), false);
			break;
		case 3:
			oled_write_P(PSTR("3\n"), false);
			break;
		case 4:
			oled_write_P(PSTR("4\n"), false);
			break;
		case 5:
			oled_write_P(PSTR("5\n"), false);
			break;
		case 6:
			oled_write_P(PSTR("6\n"), false);
			break;
		case 7:
			oled_write_P(PSTR("7\n"), false);
			break;
		case 8:
			oled_write_P(PSTR("8\n"), false);
			break;
		case 9:
			oled_write_P(PSTR("9\n"), false);
			break;
		case 10:
			oled_write_P(PSTR("10\n"), false);
			break;
		case 11:
			oled_write_P(PSTR("11\n"), false);
			break;
		case 12:
			oled_write_P(PSTR("12\n"), false);
			break;
		case 13:
			oled_write_P(PSTR("13\n"), false);
			break;
		case 14:
			oled_write_P(PSTR("14\n"), false);
			break;
		case 15:
			oled_write_P(PSTR("15\n"), false);
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
		oled_write_P(PSTR("Broken Keyboard\n  SHAHNETWORK"), false);
			oled_scroll_left();  // Turns on scrolling
	}
	return false;
}
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// dwarf
		case LGUI_T(KC_S):
			return 50;
		case LALT_T(KC_R):
			return 50;
		case LSFT_T(KC_N):
			return 50;
		case LCTL_T(KC_T):
			return 50;
		case RCTL_T(KC_Y):
			return 50;
		case RSFT_T(KC_E):
			return 50;
		case RALT_T(KC_I):
			return 50;
		case RGUI_T(KC_A):
			return 50;
		// qwerty
		case LGUI_T(KC_A):
			return 50; 
		case LALT_T(KC_S):
			return 50;
		case LSFT_T(KC_D):
			return 50;
		case LCTL_T(KC_F):
			return 50;
		case RCTL_T(KC_J):
			return 50;
		case RSFT_T(KC_K):
			return 50;
		case RALT_T(KC_L):
			return 50;
		case RGUI_T(KC_SEMICOLON):
			return 50;
		// else       
		default:
			return TAPPING_TERM;
	}
}

bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // Do not force the mod-tap key press to be handled as a modifier
            // if any other key was pressed while the mod-tap key is held down.
		// dwarf
		case LGUI_T(KC_S):
			return true;
		case LALT_T(KC_R):
			return true;
		case LSFT_T(KC_N):
			return true;
		case LCTL_T(KC_T):
			return true;
		case RCTL_T(KC_Y):
			return true;
		case RSFT_T(KC_E):
			return true;
		case RALT_T(KC_I):
			return true;
		case RGUI_T(KC_A):
			return true;
		// qwerty
		case LGUI_T(KC_A):
			return true; 
		case LALT_T(KC_S):
			return true;
		case LSFT_T(KC_D):
			return true;
		case LCTL_T(KC_F):
			return true;
		case RCTL_T(KC_J):
			return true;
		case RSFT_T(KC_K):
			return true;
		case RALT_T(KC_L):
			return true;
		case RGUI_T(KC_SEMICOLON):
			return true;
		// Force the mod-tap key press to be handled as a modifier if any
		// other key was pressed while the mod-tap key is held down.
        default:
            return false;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is tapped.
		case LT(4, KC_BSPC):
			return true;
		case LT(5, KC_ENT):
			return true;
		case LT(7, KC_TAB):
			return true;
		case LT(6, KC_SPACE):
			return true;
		// Do not select the hold action when another key is tapped.
		default:
			return false;
	}
}