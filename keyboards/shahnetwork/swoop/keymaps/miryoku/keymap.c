
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,---------------------------------.     ,----------------------------------.
 * |  Q  |   W  |   E  |   R  |   T  |     |   Y  |   U  |   I  |   O  |   P  |
 * |-----+------+------+------+------|     |------+------+------+------+------|
 * |  A  |   S  |   D  |   F  |   G  |     |   H  |   J  |   K  |   L  |   ;  |
 * |-----+------+------+------+------|     ,------+------+------+------+------|
 * |  Z  |   X  |   C  |   V  |   B  |     |   N  |   M  |   ,  |   .  |   /  |
 * `------------+------+------+------|     |------+------+------+-------------'
 *              | LCTL | BSpc | Esc  |     | Ent  | Spc  | LAlt |
 *              `--------------------'     `--------------------'
 */

[0] = LAYOUT_split_3x5_3( // DWARF
KC_F, KC_L, KC_H, KC_D, KC_V,
    KC_Z, KC_G, KC_O, KC_U, KC_DOT,

MT(MOD_LGUI, KC_S), MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_N), MT(MOD_LCTL, KC_T), KC_M,
    KC_P, MT(MOD_LCTL, KC_Y), MT(MOD_LSFT, KC_E), MT(MOD_LALT, KC_I), MT(MOD_LGUI, KC_A),

LT(3, KC_X), KC_J, KC_B, KC_K, KC_Q,
    KC_C, KC_W, KC_QUOTE, KC_COMMA, LT(3, KC_SEMICOLON),

LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
    LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
),

[1] = LAYOUT_split_3x5_3( // QWERTY
KC_Q, KC_W, KC_E, KC_R, KC_T,
    KC_Y, KC_U, KC_I, KC_O, KC_P,

MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LCTL, KC_F), KC_G,
    KC_H, MT(MOD_LCTL, KC_J), MT(MOD_LSFT, KC_K), MT(MOD_LALT, KC_L), MT(MOD_LGUI, KC_SEMICOLON),

LT(3, KC_Z), KC_X, KC_C, KC_V, KC_B,
    KC_N, KC_M, KC_COMMA, KC_DOT, LT(3, KC_QUOTE),

LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
    LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
),

[2] = LAYOUT_split_3x5_3( // RESERVED
KC_F, KC_L, KC_H, KC_D, KC_ESC,
    _______, _______, _______, _______, _______,

KC_1, KC_2, KC_3, KC_4, KC_5,
    _______, _______, _______, _______, _______,

KC_6, KC_7, KC_8, KC_9, KC_0,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    _______, _______, _______
),

[3] = LAYOUT_split_3x5_3( // PINKY
C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,
    _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
    
KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,
    _______, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,

C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,
    _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z),

KC_BTN3, KC_BTN1, KC_BTN2,
    KC_BTN2, KC_BTN1, KC_BTN3
),

[4] = LAYOUT_split_3x5_3( // MEDIA
_______, _______, _______, _______, _______,
    QK_REBOOT, _______, KC_BRID, KC_BRIU, _______,

KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,
    _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,

DF(0), DF(1), DF(9), DF(4), _______,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    KC_MSTP, KC_MPLY, KC_MUTE
),

[5] = LAYOUT_split_3x5_3( // NAV
_______, _______, _______, _______, _______,
    _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z),

KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,
    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,

DF(0), DF(1), DF(8), DF(5), _______,
    _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,

_______, _______, _______,
    KC_ENT, KC_BSPC, KC_DEL
),

[6] = LAYOUT_split_3x5_3( // MOUSE
_______, _______, _______, _______, _______,
    _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z),

KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,
    _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,

DF(0), DF(1), DF(7), DF(6), _______,
    _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,

_______, _______, _______,
    KC_BTN2, KC_BTN1, KC_BTN3
),

[7] = LAYOUT_split_3x5_3( // SYMBOL
KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,
    _______, _______, _______, _______, _______,

KC_QUES, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,
    _______, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,

KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,
    _______, DF(7), DF(6), DF(1), DF(0),

KC_LPRN, KC_RPRN, KC_UNDS,
    _______, _______, _______
),

[8] = LAYOUT_split_3x5_3( // NUMBERS
KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,
    _______, _______, _______, _______, _______,

KC_SLSH, KC_4, KC_5, KC_6, KC_EQL,
    _______, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,

KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,
    _______, DF(8), DF(5), DF(1), DF(0),

KC_DOT, KC_0, KC_MINS,
    _______, _______, _______
),

[9] = LAYOUT_split_3x5_3( // FUNCTION
KC_F1, KC_F2, KC_F3, KC_F4, KC_PSCREEN,
    _______, _______, _______, _______, _______,

KC_F5, KC_F6, KC_F7, KC_F8, KC_SCROLLLOCK,
    _______, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,

KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUSE,
    _______, DF(9), DF(4), DF(1), DF(0),

KC_APP, KC_SPC, KC_TAB,
    _______, _______, _______
),


[10] = LAYOUT_split_3x5_3( // RIGHT NUMBERS
_______, _______, _______, _______, _______,
    _______, KC_7, KC_8, KC_9, _______,

_______, _______, _______, _______, _______,
    KC_BSPC, KC_4, KC_5, KC_6, KC_ENT,

_______, _______, _______, _______, _______,
    _______, KC_1, KC_2, KC_3, _______,

_______, _______, _______,
    _______, KC_0, _______
),

[11] = LAYOUT_split_3x5_3( //  
_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    _______, _______, _______
),

[12] = LAYOUT_split_3x5_3( //  
_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    _______, _______, _______
),

[13] = LAYOUT_split_3x5_3( //  
_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    _______, _______, _______
),


};

/*
[9] = LAYOUT_split_3x5_3( // BOTH
_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,

_______, _______, _______,
    _______, _______, _______
),
*/
