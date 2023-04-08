
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
            
_______, LT(8, KC_ENT), LT(4, KC_BSPC),
            LT(6, KC_TAB), LT(10, KC_SPC), TG(6)
),

[1] = LAYOUT_split_3x5_3( // DWARF WIN
KC_F, KC_L, KC_H, KC_D, KC_V,
            KC_Z, KC_G, KC_O, KC_U, KC_DOT,
        
KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A,
            
KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON,
            
TG(13), LT(9, KC_ENT), LT(5, KC_BSPC),
            LT(7, KC_TAB), LT(11, KC_SPC), TG(7)
),

[2] = LAYOUT_split_3x5_3( // QWERTY MAC
KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P,
        
KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON,
            
KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_QUOTE,
            
MO(8), KC_ENT, OSL(4),
            OSL(5), LT(8, KC_SPC), TT(8)
),

[3] = LAYOUT_split_3x5_3( // QWERTY WIN
KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P,
        
KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON,
            
KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_QUOTE,
            
TG(10), KC_ENT, OSL(6),
            OSL(7), LT(8, KC_SPC), TT(8)
),

[4] = LAYOUT_split_3x5_3( // LEFT NAV MAC
KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_ESC,
            KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY,

KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_DEL,
            KC_CAPS, OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LCTL),

G(KC_Z), G(KC_X), G(KC_C), G(KC_V), _______,
            KC_BRID, KC_BSPC, KC_TAB, KC_ENT, _______,

_______, _______, _______,
            MO(12), KC_SPC, _______
),

[5] = LAYOUT_split_3x5_3( // LEFT NAV WIN
KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_ESC,
            _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY,

KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_DEL,
            KC_CAPS, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI),

C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,
            _______, KC_BSPC, KC_TAB, KC_ENT, _______,

_______, _______, _______,
            MO(12), KC_SPC, _______         
),

[6] = LAYOUT_split_3x5_3( // RIGHT NUMPAD MAC
_______, _______, _______, _______, _______,
            KC_COMMA, KC_7, KC_8, KC_9, KC_BSLS,
        
OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LGUI), _______,
            KC_0, KC_4, KC_5, KC_6, KC_MINS,
            
_______, _______, _______, _______, _______,
            KC_DOT, KC_1, KC_2, KC_3, KC_SLSH,
            
_______, KC_ENT, MO(12),
            _______, _______, _______
),

[7] = LAYOUT_split_3x5_3( // RIGHT NUMPAD WIN
_______, _______, _______, _______, _______,
            KC_COMMA, KC_7, KC_8, KC_9, KC_BSLS,
        
OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), _______,
            KC_0, KC_4, KC_5, KC_6, KC_MINS,
            
_______, _______, _______, _______, _______,
            KC_DOT, KC_1, KC_2, KC_3, KC_SLSH,
            
_______, KC_ENT, MO(12),
            _______, _______, _______
),

[8] = LAYOUT_split_3x5_3( // LEFT SYMBOL MAC
KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK,
        
KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LCTL),
            
KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,

_______, _______, _______,
            KC_TAB, KC_SPC, _______
),


[9] = LAYOUT_split_3x5_3( // LEFT SYMBOL WIN
KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK,
        
KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI),
            
KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,
            
_______, _______, _______,
            KC_TAB, KC_SPC, _______
),

[10] = LAYOUT_split_3x5_3( // RIGHT SPACE MAC
_______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______,
        
OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LGUI), _______,
            _______, _______, _______, _______, _______,
            
_______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______,
            
_______, KC_ENT, KC_BSPC,
            _______, _______, _______
),

[11] = LAYOUT_split_3x5_3( // RIGHT SPACE WIN
_______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______,
        
OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), _______,
            _______, _______, _______, _______, _______,
            
_______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______,
            
_______, KC_ENT, KC_BSPC,
            _______, _______, _______
),

[12] = LAYOUT_split_3x5_3( // BOTH
KC_F1, KC_F2, KC_F3, KC_F4, KC_PSCREEN,
            QK_REBOOT, DF(0), DF(1), DF(2), DF(3),
        
KC_F5, KC_F6, KC_F7, KC_F8, KC_SCROLLLOCK,
            _______, _______, _______, _______, _______,
            
KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUSE,
            _______, _______, _______, _______, _______,
            
_______, _______, _______,
            _______, _______, _______
),

[13] = LAYOUT_split_3x5_3( // REPORTING
KC_F, KC_L, KC_H, KC_D, KC_ESC,
            _______, _______, _______, _______, _______,
        
KC_1, KC_2, KC_3, KC_4, KC_5,
            _______, _______, _______, _______, _______,
            
KC_6, KC_7, KC_8, KC_9, KC_0,
            _______, _______, _______, _______, _______,
            
_______, _______, _______,
            _______, _______, _______
),

};

/*
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
*/
