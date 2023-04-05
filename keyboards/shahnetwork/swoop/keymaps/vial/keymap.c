
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

[0] = LAYOUT_split_3x5_3( // DWARF MAC
KC_F, KC_L, KC_H, KC_D, KC_V,
	KC_Z, KC_G, KC_O, KC_U, KC_DOT,
        
KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A,
            
KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON,
            
MO(8), KC_ENT, OSL(4),
            OSL(5), KC_SPC, KC_BSPC
),

[1] = LAYOUT_split_3x5_3( // DWARF WIN
KC_F, KC_L, KC_H, KC_D, KC_V,
	KC_Z, KC_G, KC_O, KC_U, KC_DOT,
        
KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A,
            
KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON,
            
MO(8), KC_ENT, OSL(6),
            OSL(7), KC_SPC, KC_BSPC
),

[2] = LAYOUT_split_3x5_3( // QWERTY MAC
KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P,
        
KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON,
            
KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,
            
MO(8), KC_ENT, OSL(4),
            OSL(5), KC_SPC, KC_BSPC
),

[3] = LAYOUT_split_3x5_3( // QWERTY WIN
KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P,
        
KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON,
            
KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,
            
MO(8), KC_ENT, OSL(6),
            OSL(7), KC_SPC, KC_BSPC
),

[4] = LAYOUT_split_3x5_3( // LEFT MAC
KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MPLY,
            KC_MUTE, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        
OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LGUI), KC_CAPS,
            KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
            
G(KC_Z), G(KC_X), G(KC_C), G(KC_V), _______,
            _______, KC_BSPC, KC_TAB, KC_ENT, KC_ESC,
            
_______, _______, _______,
            MO(9), _______, _______
),

[5] = LAYOUT_split_3x5_3( // RIGHT MAC
KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK,
        
KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LCTL),
            
KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,
            
_______, _______, MO(9),
            _______, _______, _______
),

[6] = LAYOUT_split_3x5_3( // LEFT WIN
_______, _______, KC_VOLD, KC_VOLU, KC_MPLY,
            KC_MUTE, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        
OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CAPS,
            KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
            
C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,
            _______, KC_BSPC, KC_TAB, KC_ENT, KC_ESC,
            
_______, _______, _______,
            MO(9), _______, _______
),

[7] = LAYOUT_split_3x5_3( // RIGHT WIN
KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK,
        
KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI),
            
KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,
            
_______, _______, MO(9),
            _______, _______, _______
),

[8] = LAYOUT_split_3x5_3( // NUMPAD
KC_F1, KC_F2, KC_F3, KC_F4, DF(0),
            _______, KC_7, KC_8, KC_9, _______,
        
KC_F5, KC_F6, KC_F7, KC_F8, DF(1),
            _______, KC_4, KC_5, KC_6, _______,
            
KC_F9, KC_F10, KC_F11, KC_F12, DF(2),
            _______, KC_1, KC_2, KC_3, _______,
            
_______, _______, DF(3),
            _______, KC_0, _______
),

[9] = LAYOUT_split_3x5_3( // BOTH
KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        
KC_1, KC_2, KC_3, KC_4, KC_5,
            KC_6, KC_7, KC_8, KC_9, KC_0,
            
_______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______,
            
_______, _______, _______,
            _______, _______, _______
),

[10] = LAYOUT_split_3x5_3( 
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
