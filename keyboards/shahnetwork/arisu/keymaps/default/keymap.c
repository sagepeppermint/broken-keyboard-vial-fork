
#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum {
    TD_LALT_LGUI = 0,
    TD_RALT_RGUI
};

#define LALT_LG TD(TD_LALT_LGUI)
#define RALT_RG TD(TD_RALT_RGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


	[0] = LAYOUT( // DWARF HRM
	    KC_ESC,  KC_GRAVE,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB, KC_F,  KC_L,  KC_H,  KC_D,   KC_V, KC_Z, KC_G, KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,    KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH, KC_ENT, 
		         KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_Q, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_UP,   KC_RSFT, 
		         KC_LALT, KC_LGUI,    MO(5), KC_SPC,  KC_SPC,    MO(4),                            KC_LEFT, KC_DOWN, KC_RGHT
	),

	[1] = LAYOUT( // DWARF
		KC_ESC,  KC_GRAVE,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB, KC_F,  KC_L,  KC_H,  KC_D,   KC_V, KC_Z, KC_G, KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), KC_S, KC_R, KC_N, KC_T, KC_M,    KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH, KC_ENT, 
		         KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_Q, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_UP,   KC_RSFT, 
		         KC_LALT, KC_LGUI,    MO(5), KC_SPC,  KC_SPC,    MO(4),                            KC_LEFT, KC_DOWN, KC_RGHT
	),

	[2] = LAYOUT( // QWERTY 
		KC_ESC,  KC_GRAVE,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, 
		KC_PGUP, KC_TAB,  KC_Q, KC_W, KC_E,   KC_R,   KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_PGDN, OSM(MOD_LCTL), KC_A, KC_S, KC_D,   KC_F,   KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
		         KC_LSFT, KC_Z, KC_X, KC_C,   KC_V,   KC_B, KC_B, KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT, 
		         KC_LALT, KC_LGUI,    MO(5), KC_SPC,  KC_SPC,    MO(4),                            KC_LEFT, KC_DOWN, KC_RGHT
	),

	[3] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[4] = LAYOUT( // Right MOD
		DF(0),   QK_BOOT, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_GRV, 
		DF(1),   KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_PSCR, KC_SCRL, KC_PAUS, KC_DEL, 
		DF(2),   _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, _______, _______, _______,  KC_HOME, KC_END,  _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______,  KC_INS,  KC_DEL,  _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                      _______, _______, _______
	),
	
	[5] = LAYOUT( // L spacebar mod
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, _______, _______, _______, _______, 
		_______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, KC_0, KC_1, KC_2, KC_3, _______, KC_PGUP, _______, 
		         _______, _______,          _______, _______, _______, _______,                         KC_HOME, KC_PGDN, KC_END
	),

	[6] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	)


};



// Permissive hold
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		// Immediately select the hold action when another key is tapped.
		case LSFT_T(KC_N):
		case RSFT_T(KC_E):
		case LSFT_T(KC_D):
		case RSFT_T(KC_K):
			return true;
		// Do not select the hold action when another key is tapped.
		default:
			return false;
	}
}

// Tapping term per key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_S):
        case RGUI_T(KC_A):
		case LGUI_T(KC_A):
		case RGUI_T(KC_SEMICOLON):
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
};

#include "features/achordion.h"


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
};

void matrix_scan_user(void) {
  achordion_task();
};

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
      if (other_record->event.key.row == 0 && other_record->event.key.col == 7) { return false; } // number 6
      if (other_record->event.key.row == 3 && other_record->event.key.col == 6) { return true; } // right q (DWARF) or b (QWERTY)
      break;
      
    case RCTL_T(KC_Y):  
    case RSFT_T(KC_E):
    case RALT_T(KC_I):
    case RGUI_T(KC_A):
      if (other_record->event.key.row == 0 && other_record->event.key.col == 7) { return true; } // number 6
      if (other_record->event.key.row == 3 && other_record->event.key.col == 6) { return false; } // right q (DWARF) or b (QWERTY)
      break;
  }
  
  if (other_record->event.key.row == 4) { return true; } // Allow the bottom row to be used as the second key for same side
  if (tap_hold_record->event.key.row == 4) { return true; } // Allow the bottom row to be used as the first key for same side
  return achordion_opposite_hands(tap_hold_record, other_record);
};

// Achordion time to decide tap vs hold (on top of normal tapping term)
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
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

// Tap Dance Definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for L-Alt, twice for L-GUI
    [TD_LALT_LGUI] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LGUI),
    // Tap once for R-Alt, twice for R-GUI
    [TD_RALT_RGUI] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_RGUI)
};

/*
// To enable debug, can delete
 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=false;
    debug_matrix=false;
 };
*/

