#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all( // qwerty
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,          KC_DEL,  
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,                   KC_PGUP,
	OSM(MOD_LCTL), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                       KC_PGDN,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                    KC_UP,
	KC_LGUI,          KC_LALT,          KC_SPC,  MO(3),          KC_SPC,           KC_LCTL,                           KC_LEFT, KC_DOWN, KC_RGHT 
  ),

  [1] = LAYOUT_all( // dwarf
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,               KC_DEL,  
	KC_TAB,  KC_F,    KC_L,    KC_H,    KC_D,    KC_V,    KC_Z,    KC_G,    KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC,                       KC_PGUP,
	OSM(MOD_LCTL), KC_S, KC_R, KC_N, KC_T, KC_M,    KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH, KC_ENT,                                                     KC_PGDN,
	KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q,    KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_RSFT,                            KC_UP,
	KC_LGUI,          KC_LALT,          KC_SPC,  MO(3),          KC_SPC,           KC_LCTL,                           KC_LEFT, KC_DOWN, KC_RGHT 
  ),

  [2] = LAYOUT_all( // dwarf hrm
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,                              KC_DEL,  
	KC_TAB,  KC_F,    KC_L,    KC_H,    KC_D,    KC_V,    KC_Z,    KC_G,    KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC,           	                        KC_PGUP,
	OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,    KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH, KC_ENT,     KC_PGDN,
    KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q,    KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_RSFT,                            KC_UP,
	KC_LGUI,          KC_LALT,          KC_SPC,  MO(3),          KC_SPC,           KC_LCTL,                           KC_LEFT, KC_DOWN, KC_RGHT 
  ),

  [3] = LAYOUT_all( // fn
	QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,   DF(0),
	KC_CAPS, _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, KC_PSCR, KC_SCRL, KC_PAUS,  _______,                   DF(1),
	KC_ESC,  KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______,                             DF(2),
	_______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, KC_0, KC_1, KC_2, KC_3, _______, _______,                      KC_PGUP, 
	_______, _______,          _______, _______,          _______,          _______,                            KC_HOME, KC_PGDN, KC_END 
  ),

  [4] = LAYOUT_all( // left shift key layer
	_______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,  _______, _______, _______,
	_______, KC_PGUP, KC_UP, KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,           _______,
	_______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, 
	_______, _______,          _______, _______,          _______,          _______,                            _______, _______, _______ 
  ),

  [5] = LAYOUT_all(
	_______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,  _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,           _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, 
	_______, _______,          _______, _______,          _______,          _______,                            _______, _______, _______ 
  ),


	  
};

/*
  [2] = LAYOUT_all( // dwarf hrm
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,                              KC_DEL,  
	KC_TAB,  KC_F,    KC_L,    KC_H,    KC_D,    KC_V,    KC_Z,    KC_G,    KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC,           	                        KC_PGUP,
	OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,    KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH, KC_ENT,     KC_PGDN,
	KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q,    KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_RSFT,                            KC_UP,
	KC_LGUI,          KC_LALT,          KC_SPC,  MO(3),          KC_SPC,           KC_LCTL,                           KC_LEFT, KC_DOWN, KC_RGHT 
  ),
*/

// Tapping term per key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_S):
        case RGUI_T(KC_A):
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
};

// Permissive hold per key
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is tapped.
		case LSFT_T(KC_N):
		case RSFT_T(KC_E):
			return true;
		// Do not select the hold action when another key is tapped.
		default:
			return false;
	}
};

// Hold on other key press per key
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is pressed.
		case LT(4, KC_BSPC):
			return true;
		default:
			return false;
	}
};


#include "features/achordion.h"
#include "features/global_quick_tap.h"

bool pre_process_record_user(uint16_t keycode, keyrecord_t* record) {
    // enable global quick tap before other processing. Note this will not work properly with capsword.
    if (!process_global_quick_tap(keycode, record)) {return false; }

  return true;
};


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    // enable achordion.
    if (!process_achordion(keycode, record)) { return false; }
  //  macros ...

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
	//  Fix the alice split layout not corresponding to the matrix detected split
    switch (tap_hold_keycode) {
    case LGUI_T(KC_S):
    case LALT_T(KC_R):
    case LSFT_T(KC_N):
    case LCTL_T(KC_T):
        if (other_keycode == KC_Z || other_keycode == KC_P) { return true; }
        break;
      
    case RCTL_T(KC_Y):  
    case RSFT_T(KC_E):
    case RALT_T(KC_I):
    case RGUI_T(KC_A):
        if (other_keycode == KC_Z || other_keycode == KC_P) { return false; }
        break;
    }
    if (tap_hold_record->event.key.row % (MATRIX_ROWS) >= 4) { return true; } // Ignore bottom row and thumbcluster
    if (other_record->event.key.row % (MATRIX_ROWS) >= 4) { return true; } // Ignore bottom row and thumbcluster
    return achordion_opposite_hands(tap_hold_record, other_record);
};

// Achordion time to decide tap vs hold (on top of normal tapping term)
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode) {
    case LT(4, KC_BSPC):
        return 0; // Bypasses achordion for these keys and eliminates additional input lag
    }
    return 300;  // ms
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
 

// Global quick tap keys
uint16_t get_global_quick_tap_ms(uint16_t keycode) {
    switch (keycode) {
        /* Example: KEYCODE will not be considered for hold-tap if the last key press was less than 150ms ago */
        /* case KEYCODE: */
        /*     return 150; */
        case LGUI_T(KC_S):
        case LALT_T(KC_R):
        case LSFT_T(KC_N):
        case LCTL_T(KC_T):
        case RCTL_T(KC_Y):
        case RSFT_T(KC_E):
        case RALT_T(KC_I):
        case RGUI_T(KC_A): 
            return 150;
        default:
            return 0;  // global_quick_tap is not applied
    }
};

/*(
// Caps word
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
};
*/


/* // To enable debug, can delete
 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=true;

 };

 */