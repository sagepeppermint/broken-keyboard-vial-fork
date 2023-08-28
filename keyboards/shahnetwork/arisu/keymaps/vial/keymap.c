
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


	[0] = LAYOUT( // DWARF
		KC_DEL,  KC_ESC,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB, KC_F,  KC_L,  KC_H,  KC_D,   KC_V, KC_Z, KC_G, KC_O,    KC_U,    KC_DOT,  KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), KC_S, KC_R, KC_N, KC_T, KC_M,    KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH, KC_ENT, 
		         KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q, KC_Q, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_UP,   KC_RSFT, 
		         KC_LCTL, KC_LGUI,    KC_LALT,  MO(4),  LT(5,KC_SPC),    MO(3),                  		   KC_LEFT, KC_DOWN, KC_RGHT
	),

	[1] = LAYOUT( // QWERTY 
		KC_DEL,  KC_ESC,  KC_1, KC_2, KC_3,   KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, 
		KC_PGUP, KC_TAB,  KC_Q, KC_W, KC_E,   KC_R,   KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_PGDN, OSM(MOD_LCTL), KC_A, KC_S, KC_D,   KC_F,   KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
		         KC_LSFT, KC_Z, KC_X, KC_C,   KC_V,   KC_B, KC_B, KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT, 
		         KC_LCTL, KC_LGUI,    KC_LALT,  MO(4),  LT(5, KC_SPC),    MO(3),                  		   KC_LEFT, KC_DOWN, KC_RGHT
	),

	[2] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[3] = 		LAYOUT( // Right mod
		DF(0), _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_GRV, 
		DF(1), KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_PSCR, KC_SCRL, KC_PAUS, QK_BOOT, 
		DF(2), _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, _______, _______, _______,  KC_HOME, KC_END,  _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______,  KC_INS,  KC_DEL,  _______, _______, 
		         _______, _______,          _______, _______,  _______, _______,                                      _______, _______, _______
	),
	
	[4] = LAYOUT( // Left spacebar mod
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, KC_ESC, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_DEL, KC_BSPC, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______, _______, 
		         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, 
		         _______, _______,          _______, _______, _______, _______,                         KC_HOME, KC_PGDN, KC_END
	),

	[5] = LAYOUT( // Right spacebar mod-tap
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, KC_0, KC_1, KC_2, KC_3, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[6] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[7] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	),

	[8] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		         _______, _______,          _______, _______, _______, _______,                                     _______, _______, _______
	)


};


/* 
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
 */
/* 
// To enable debug, can delete
 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=false;
    debug_matrix=false;
 };

 */
