/* 
Copyright 2021 qwertykeys

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


	[0] = LAYOUT( // DWARF
		KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB, KC_F,  KC_L,  KC_H,  KC_D,   KC_V, KC_Z, KC_G, KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), KC_S, KC_R, KC_N, KC_T, KC_M,    KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH, KC_ENT, 
		         KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_Q, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_UP,   KC_RSFT, 
		         KC_LCTL, KC_LGUI,    KC_LALT,  MO(5),  KC_SPC,    MO(4),                        KC_LEFT, KC_DOWN, KC_RGHT
	),

	[1] = LAYOUT( // QWERTY default
		KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, 
		KC_PGUP, KC_TAB,  KC_Q, KC_W, KC_E,   KC_R,   KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D,   KC_F,   KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
		         KC_LSFT, KC_Z, KC_X, KC_C,   KC_V,   KC_B, KC_B, KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT, 
		         KC_LCTL, KC_LGUI,    KC_LALT,  KC_SPC,  KC_SPC,    MO(4),                        KC_LEFT, KC_DOWN, KC_RGHT
	),

	[2] = LAYOUT( // DWARF HRM
	    KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB, KC_F,  KC_L,  KC_H,  KC_D,   KC_V, KC_Z, KC_G, KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,    KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH, KC_ENT, 
		         KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_Q, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_UP,   KC_RSFT, 
		         KC_LCTL, KC_LGUI,    KC_LALT,  MO(5),  KC_SPC,    MO(4),                        KC_LEFT, KC_DOWN, KC_RGHT
	),

	[3] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[4] = 		LAYOUT( // Right MOD
		_______, _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  QK_BOOT, 
		_______, KC_CAPS, DF(0), DF(1), DF(2),  _______, _______, _______, _______, _______, _______,  KC_PSCR, KC_SCRL, KC_PAUS, _______, 
		_______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, _______, _______, _______,  KC_HOME, KC_END,  _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______,  KC_INS,  KC_DEL,  _______, _______, 
		         _______, _______,          _______, _______,  _______, _______,                                      _______, _______, _______
	),
	
	[5] = LAYOUT( // L spacebar mod
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, _______, _______, _______, KC_DEL, 
		_______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, KC_0, KC_1, KC_2, KC_3, _______, _______, KC_PGUP, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     KC_HOME, KC_PGDN, KC_END
	),

	[6] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	)


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

