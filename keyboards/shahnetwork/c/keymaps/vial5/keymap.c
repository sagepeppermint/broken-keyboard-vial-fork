#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      
    [0] = LAYOUT_split_3x6_3( // DWARF WIN
        
        _______, KC_F, KC_L, KC_H, KC_D, KC_V,
            KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,
        
        _______, KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A, _______,
        
        _______, KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,
        
        KC_TAB, KC_ENT, KC_ESC,
            KC_BSPC, KC_SPC, KC_DEL
    ),
       
     [1] = LAYOUT_split_3x6_3( // QWERTY WIN
        
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P, _______,
        
        _______, KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE,
        
        _______, KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,
        
        OSL(4), KC_ENT, MO(6),
            KC_BSPC, KC_SPC, OSL(7)
    ),
  
     [2] = LAYOUT_split_3x6_3( // DWARF MAC
        
        _______, KC_F, KC_L, KC_H, KC_D, KC_V,
            KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,
        
        _______, KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A, _______,
        
        _______, KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,
        
        OSL(5), LT(6, KC_ENT), MO(6),
            KC_BSPC, KC_SPC, OSL(8)
    ),
    
      [3] = LAYOUT_split_3x6_3( //QWERTY MAC
        
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P, _______,
        
        _______, KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE,
        
        _______, KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,
        
        OSL(5), KC_ENT, MO(6),
            KC_BSPC, KC_SPC, OSL(8)
    ),
    
     [4] = LAYOUT_split_3x6_3( // LEFT WIN
     
        _______, MEH(KC_SLSH), KC_VOLD, KC_VOLU, KC_MPLY, KC_MUTE,
            KC_MPRV, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_MNXT,
        
        _______, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CAPS,
            KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, 
        
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), S(G(KC_S)),
            KC_PSCR, KC_BSPC, KC_TAB, KC_ENT,  _______, _______,
        
        _______, _______, _______,
            _______, _______, MO(9)
    ),
       
     [5] = LAYOUT_split_3x6_3( // LEFT MAC
     
        KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MPLY, KC_MUTE, 
            KC_MPRV, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_MNXT, 
        
        OSM(MOD_HYPR), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LGUI), KC_CAPS, 
            KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, 
        
        G(KC_GRAVE), G(KC_Z), G(KC_X), G(KC_C), G(KC_V), KC_F3,
            _______, KC_BSPC, KC_TAB, KC_ENT, _______, _______,
        
        _______, _______, _______,
            _______, _______, MO(9)
    ),
       
    [6] = LAYOUT_split_3x6_3( // NUMPAD
        
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,     
            _______, KC_7, KC_8, KC_9, _______, _______,
        
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
            _______, KC_4, KC_5, KC_6, _______, _______,
        
        QK_BOOT, DF(0), DF(1), DF(2), DF(3), _______,
            _______, KC_1, KC_2, KC_3, _______, _______,
        
        _______, _______, _______,
            KC_MINUS, KC_0, KC_DOT
    ),
    
    [7] = LAYOUT_split_3x6_3( // RIGHT WIN
        
        _______, KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, _______,
        
        _______, KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,
        
        _______, KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM, _______,
        
        MO(9), _______, _______,
            _______, _______, _______
    ),
    
    [8] = LAYOUT_split_3x6_3( // RIGHT MAC
        
        _______, KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_TILD,
            KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, _______,
        
        _______, KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, 
            KC_HASH, OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_HYPR),
        
        _______, KC_PLUS, KC_PIPE, KC_AT, KC_SLSH, KC_PERC,
             KC_GRV, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM, _______,
        
        MO(9), _______, _______,
            _______, _______, _______
    ),
    
    [9] = LAYOUT_split_3x6_3( // FUNCTION
        
        KC_UNDS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
        
        KC_MINS, KC_1, KC_2, KC_3, KC_4, KC_5,
            KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
        
        KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
            KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12,
        
        _______, _______, _______,
            _______, _______, _______ 
    ),


     [10] = LAYOUT_split_3x6_3(
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______,
            _______, _______, _______
    ),
    
     [11] = LAYOUT_split_3x6_3(
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______,
            _______, _______, _______
    ),
    
     [12] = LAYOUT_split_3x6_3(
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______,
            _______, _______, _______
    ),
    
};

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    {{0,4}, {1,4}, {2,4}, {3,4}, {4,4}, {5,4}},
    {{0,5}, {1,5}, {2,5}, {3,5}, {4,5}, {5,5}},
    {{0,6}, {1,6}, {2,6}, {3,6}, {4,6}, {5,6}},
    {{0,7}, {1,7}, {2,7}, {3,7}, {4,7}, {5,7}},
    {{0,0}, {1,0}, {2,0}, {3,0}, {4,0}, {5,0}},
    {{0,1}, {1,1}, {2,1}, {3,1}, {4,1}, {5,1}},
    {{0,2}, {1,2}, {2,2}, {3,2}, {4,2}, {5,2}},
    {{0,3}, {1,3}, {2,3}, {3,3}, {4,3}, {5,3}},
};

