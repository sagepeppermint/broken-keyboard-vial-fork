#include QMK_KEYBOARD_H

enum custom_keycodes {
    M_KEYBOARD = SAFE_RANGE,
    M_UPDIR,
    CAPS_WORD_LOCK,
    // Other custom keys...
};

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
		KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, CAPS_WORD_LOCK,
				TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
		
		KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V, KC_GRV,
				KC_CAPS, KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BSLS,
		
		KC_ESC, LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M, KC_PAGE_UP,
				KC_HOME, KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,
		
		SC_LSPO, LSFT_T(KC_X), KC_J, KC_B, LT(10, KC_K), KC_Q, KC_PAGE_DOWN,
				KC_END, KC_C, LT(10, KC_W), KC_QUOTE, KC_COMMA, RSFT_T(KC_SEMICOLON), SC_RSPC,
		
		KC_LBRC, KC_LEFT, KC_RIGHT, 
		KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_DOWN, KC_UP, KC_RBRC
		
	),
		
	[1] = LAYOUT_5x7( // QWERTY WIN
		KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
				TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
		
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_GRV,
				KC_CAPS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
		
		KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_PAGE_UP,
				KC_HOME, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,
		
		SC_LSPO, LSFT_T(KC_Z), KC_X, KC_C, LT(10, KC_V), KC_B, KC_PAGE_DOWN,
				KC_END, KC_N, LT(10, KC_M), KC_COMMA, KC_DOT, RSFT_T(KC_SLASH), SC_RSPC,
		
		KC_LBRC, KC_LEFT, KC_RIGHT, 
		KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_DOWN, KC_UP, KC_RBRC
		
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
 
	[4] = LAYOUT_5x7( // Left main
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
				_______, _______, KC_HOME, _______, KC_END, _______, _______,
				
		_______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS, _______,
				_______, _______, KC_LEFT, KC_UP, KC_RIGHT, _______, _______,
		
		KC_LSFT, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), LSG(KC_S), _______,
				_______, _______, KC_PGDN, KC_DOWN, KC_PGUP, _______, KC_RSFT,
		
		_______, _______, _______, 
		_______, _______, _______, _______,
        KC_ENT, KC_SPACE, _______, _______, 
        _______, _______, _______
		
	),
 
	[5] = LAYOUT_5x7( // Left alt
		QK_BOOT, _______, _______, _______, _______, _______, _______,
				_______, _______, TO(0), TO(1), _______, _______, _______,
		
		_______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
				_______, KC_PAUS, KC_F9, KC_F10, KC_F11, KC_F12, _______,
				
		KC_ESC, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS, _______,
				_______, KC_SCRL, KC_F5, KC_F6, KC_F7, KC_F8, KC_INS,
		
		KC_LSFT, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), LSG(KC_S), _______,
				_______, KC_PSCR, KC_F1, KC_F2, KC_F3, KC_F4, KC_RSFT,
		
		_______, _______, _______, 
		_______, _______, _______, _______,
        KC_ENT, KC_SPACE, _______, _______, 
        _______, _______, _______
		
	),

	  [6] = LAYOUT_5x7( // Right main
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, _______,
				_______, _______, _______, _______, _______, _______, _______,
				
		_______, KC_SLSH, KC_4, KC_5, KC_6, KC_BSLS, _______,
				_______, KC_CAPS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______,
		
		KC_LSFT, KC_GRV, KC_1, KC_2, KC_3, KC_EQL, _______,
				_______, _______, KC_BACKSPACE, KC_DEL, KC_TAB, KC_ENT, KC_RSFT,
		
		_______, _______, _______, 
		KC_DOT, _______, KC_0, KC_MINS,
		_______, _______, _______, _______, 
		_______, _______, _______
		
	),


	  [7] = LAYOUT_5x7( // Right alt
		_______, _______, _______, _______, _______, _______, _______,
				_______, _______, _______, _______, _______, _______, _______,
		
		_______, KC_LCBR, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RCBR, _______,
				_______, _______, _______, _______, _______, _______, _______,
				
		_______, KC_QUESTION, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_PIPE, _______,
				_______, KC_CAPS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______,
		
		KC_LSFT, KC_TILDE, KC_EXCLAIM, KC_AT, KC_HASH, KC_PLUS, _______,
				_______, _______, KC_BACKSPACE, KC_DEL, KC_TAB, KC_ENT, KC_RSFT,
		
		_______, _______, _______, 
		KC_LEFT_PAREN, _______, KC_RIGHT_PAREN, KC_UNDERSCORE,
		_______, _______, _______, _______, 
		_______, _______, _______
		
	),

 
	[8] = LAYOUT_5x7( // Numpad
		_______, _______, _______, _______, _______, _______, _______,
		    _______, KC_NUM, KC_BSPC, KC_PSLS, KC_PAST, KC_CALC, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		    _______, _______, KC_P7, KC_P8, KC_P9, KC_PMNS, _______,
				
		_______, _______, _______, _______, _______, _______, _______,
		    _______, _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
		    _______, _______, KC_P1, KC_P2, KC_P3, KC_PENT, _______,
		
		_______, _______, _______, 
		_______, _______, _______, _______,
		TG(8), KC_P0, _______, _______, 
		KC_P0, KC_P0, KC_PDOT
		
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

 
	[10] = LAYOUT_5x7( // Shortcut
		_______, _______, _______, _______, _______, _______, _______,
			_______, _______, _______, _______, _______, _______, _______,
		
		_______, _______, _______, _______, _______, _______, _______,
			_______, _______, _______, _______, _______, _______, _______,
				
		_______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS, _______,
			_______, KC_CAPS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______,
		
		KC_LSFT, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______,
			_______, _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), KC_RSFT,
		
		_______, _______, _______, 
		_______, _______, _______, _______,
		_______, _______, _______, _______, 
		_______, _______, _______
		
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

// // Workaround for https://github.com/qmk/qmk_firmware/issues/16406
// void suspend_wakeup_init_user(void) {
// 	NVIC_SystemReset();
// }

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	if (!is_keyboard_left()) {
		return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
	}

	return rotation;
};

bool oled_task_user(void) {
	if (is_keyboard_left()) {
		// Host Keyboard Layer Status
		oled_write_P(PSTR("Layer: "), false);

		switch (get_highest_layer(layer_state)) {
		case 0:
			oled_write_P(PSTR("DWARF\n"), false);
			break;
		case 1:
			oled_write_P(PSTR("QWERTY\n"), false);
			break;
		case 2:
			oled_write_P(PSTR("2\n"), false);
			break;
		case 3:
			oled_write_P(PSTR("3\n"), false);
			break;
		case 4:
			oled_write_P(PSTR("NAVIGATION\n"), false);
			break;
		case 5:
			oled_write_P(PSTR("FUNCTION\n"), false);
			break;
		case 6:
			oled_write_P(PSTR("NUMBER\n"), false);
			break;
		case 7:
			oled_write_P(PSTR("SYMBOL\n"), false);
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
};
#endif

// Permissive hold per key
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is tapped.
		case LSFT_T(KC_N):
		case RSFT_T(KC_E):
		case LSFT_T(KC_D):
		case RSFT_T(KC_K):
			return true;
		default:
			return false;
	}
};

// Quick tapping term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_BSPC):
		case LT(5, KC_DEL):
		case LT(7, KC_ENT):
		case LT(6, KC_SPACE):
			return QUICK_TAP_TERM; // nothing for now, 0 to disable
        default:
            return QUICK_TAP_TERM;
    }
};

// Hold on other key press per key
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is pressed.
		case LT(4, KC_BSPC):
		case LT(5, KC_DEL):
		case LT(7, KC_ENT):
		case LT(6, KC_SPACE):
			return true;
		default:
			return false;
	}
};


// Tapping term per key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
		// DWARF hrm
		case LGUI_T(KC_S): 
		case LALT_T(KC_R):
		case LSFT_T(KC_N): 
		case LCTL_T(KC_T):
		case RCTL_T(KC_Y): 
		case RSFT_T(KC_E):
		case RALT_T(KC_I): 
		case RGUI_T(KC_A):
		case LT(10, KC_K):
		case LT(10, KC_W):
		case LSFT_T(KC_X):
		case RSFT_T(KC_SEMICOLON):
		// QWERTY hrm
		case LGUI_T(KC_A):
		case LALT_T(KC_S):
		case LSFT_T(KC_D):
		case LCTL_T(KC_F):
		case RCTL_T(KC_J):
		case RSFT_T(KC_K):
		case RALT_T(KC_L): 
		case RGUI_T(KC_SEMICOLON):
		case LT(10, KC_V):
		case LT(10, KC_M):
		case LSFT_T(KC_Z):
		case RSFT_T(KC_SLASH):
            return 300;
		// Thumb keys
		case LT(4, KC_BSPC):
		case LT(5, KC_DEL):
		case LT(7, KC_ENT): 
		case LT(6, KC_SPACE):
			return 175;
        default:
            return TAPPING_TERM;
    }
};

#include "features/achordion.h"
#include "features/global_quick_tap.h"
#include "features/caps_word_lock.c"

bool pre_process_record_user(uint16_t keycode, keyrecord_t* record) {
    // enable global quick tap before other processing. Note this will not work properly with capsword.
    if (!process_global_quick_tap(keycode, record)) {return false; }
    return true;
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) { return false; }
    process_caps_word_lock(keycode, record);
  // Macros
    switch (keycode) {
    case M_KEYBOARD: SEND_STRING(/*k*/"eyboard"); break;
    case M_UPDIR: SEND_STRING(/*.*/"./"); break;
    case CAPS_WORD_LOCK:
        // Toggle `caps_word_lock_on`
        if (record->event.pressed) {
            if (caps_word_lock_on) {
                caps_word_lock_disable();
                return false;
            } else {
                caps_word_lock_enable();
                return false;
            }
        }
        return false;
    }
    
    
     
    
  return true;
};

void matrix_scan_user(void) {
  achordion_task();
};

// Achordion which keys count as tap hold
bool achordion_chord(uint16_t tap_hold_keycode,
					 keyrecord_t* tap_hold_record,
					 uint16_t other_keycode,
					 keyrecord_t* other_record) {   
    if (tap_hold_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; } // Ignore bottom row and thumbcluster
    if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; } // Ignore bottom row and thumbcluster
    return achordion_opposite_hands(tap_hold_record, other_record);
};

// Achordion time to decide tap vs hold (on top of normal tapping term)
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode){
    // Thumb keys
	case LT(4, KC_BSPC):
	case LT(5, KC_DEL):
	case LT(7, KC_ENT): 
	case LT(6, KC_SPACE):
		return 0; // disable for these buttons
	default:
        return 300;  // ms
    }
};

// Achordion eager mods define the modifiers themselves
bool achordion_eager_mod(uint8_t mod) {
  switch (mod) {
	case MOD_LSFT:
	case MOD_RSFT:
	case MOD_LCTL:
	case MOD_RCTL:
	case MOD_LALT:
	case MOD_RALT:
//	case MOD_LGUI:
//	case MOD_RGUI:
	  return true;  // Eagerly apply mods.

	default:
	  return false;
  }
};

// Repeat key alternate
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    if ((mods & MOD_MASK_CTRL)) {  // Was Ctrl held?
        switch (keycode) {
            case KC_Y: return C(KC_Z);  // Ctrl + Y reverses to Ctrl + Z.
            case KC_Z: return C(KC_Y);  // Ctrl + Z reverses to Ctrl + Y.
        }
    }
    
    bool shifted = (mods & MOD_MASK_SHIFT);  // Was Shift held?
    switch (keycode) {
        case KC_TAB:
            if (shifted) {        // If the last key was Shift + Tab,
                return KC_TAB;    // ... the reverse is Tab.
            } else {              // Otherwise, the last key was Tab,
                return S(KC_TAB); // ... and the reverse is Shift + Tab.
            }
    }
    
    // Same finger bigrams DWARF
    if (IS_LAYER_ON(0)) {
        switch (keycode) {
            case KC_U: return KC_I;  // For "UI" bigram.
            case LALT_T(KC_R): return KC_L;  // For "RL" bigram.
            case KC_O: return KC_E;  // For "OE" bigram.
            case RSFT_T(KC_E): return KC_O;  // For "EO" bigram.
        }
    }
    
    // Macros
    switch (keycode) {
        case KC_K: return M_KEYBOARD;
        case KC_DOT: return M_UPDIR;
    }
    
    // Opposites
    switch (keycode) {
        case KC_LEFT: return KC_RGHT;
        case KC_RGHT: return KC_LEFT;
        case KC_UP: return KC_DOWN;
        case KC_DOWN: return KC_UP;
        case KC_HOME: return KC_END;
        case KC_END: return KC_HOME;
        case KC_PGUP: return KC_PGDN;
        case KC_PGDN: return KC_PGUP;
        
    // Completions
        case KC_LCBR: return KC_RCBR;
        case KC_LBRC: return KC_RBRC;
        case KC_LEFT_PAREN: return KC_RIGHT_PAREN;
    }
    

    return KC_NO;  // Defer to default definitions.
}

/* // Caps word
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_SLASH:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
} */

// Global quick tap keys
uint16_t get_global_quick_tap_ms(uint16_t keycode) {
    switch (keycode) {
        /* Example: KEYCODE will not be considered for hold-tap if the last key press was less than 150ms ago */
        /* case KEYCODE: */
        /*     return 150; */
        // DWARF hrm
		case LGUI_T(KC_S): 
		case LALT_T(KC_R):
		case LSFT_T(KC_N): 
		case LCTL_T(KC_T):
		case RCTL_T(KC_Y): 
		case RSFT_T(KC_E):
		case RALT_T(KC_I): 
		case RGUI_T(KC_A):
		case LT(10, KC_K):
		case LT(10, KC_W):
		case LSFT_T(KC_X):
		case RSFT_T(KC_SEMICOLON):
		// QWERTY hrm
		case LGUI_T(KC_A):
		case LALT_T(KC_S):
		case LSFT_T(KC_D):
		case LCTL_T(KC_F):
		case RCTL_T(KC_J):
		case RSFT_T(KC_K):
		case RALT_T(KC_L): 
		case RGUI_T(KC_SEMICOLON):
		case LT(10, KC_V):
		case LT(10, KC_M):
		case LSFT_T(KC_Z):
		case RSFT_T(KC_SLASH):
            return 150;
        default:
            return 0;  // global_quick_tap is not applied
    }
};

// Combos
const uint16_t PROGMEM combo1[] = {KC_H, KC_D, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo1, CAPS_WORD_LOCK),
};

// To enable debug, can delete
 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=false;
    debug_matrix=false;
 };


