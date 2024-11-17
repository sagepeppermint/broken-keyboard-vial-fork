#include QMK_KEYBOARD_H

#include "features/global_quick_tap.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      
     [0] = LAYOUT_split_3x6_3( // DWARF HRM
        
        _______, KC_F, KC_L, KC_H, KC_D, KC_V,
            KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,
        
        _______, LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,
            KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,
        
        _______, KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,
        
        LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
            LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
    ),
    
     [1] = LAYOUT_split_3x6_3( // QWERTY HRM
        
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P, _______,
        
        _______, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,
            KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,
        
        _______, KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,
        
        LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
            LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
    ),

     [2] = LAYOUT_split_3x6_3( // QWERTY
        
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T,
            KC_Y, KC_U, KC_I, KC_O, KC_P, _______,
        
        _______, KC_A, KC_S, KC_D, KC_F, KC_G,
            KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE,
        
        _______, KC_Z, KC_X, KC_C, KC_V, KC_B,
            KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,
        
        LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
            LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
    ),
  
     [3] = LAYOUT_split_3x6_3( // DWARF
        
        _______, KC_F, KC_L, KC_H, KC_D, KC_V,
            KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,
        
        _______, KC_S, KC_R, KC_N, KC_T, KC_M,
            KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH,
        
        _______, KC_X, KC_J, KC_B, KC_K, KC_Q,
            KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,
        
        LT(4, KC_ESC), LT(5, KC_SPC), LT(6, KC_TAB),
            LT(7, KC_ENT), LT(8, KC_BSPC), LT(9, KC_DEL)
    ),
    
     [4] = LAYOUT_split_3x6_3( // MEDIA 
     
        _______, QK_BOOT, DF(0), DF(1), QK_REBOOT, _______,
            _______, DF(2), DF(3), _______, _______, _______,
        
        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR,
            _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______,
            KC_MSTP, KC_MPLY, KC_MUTE
    ),
       
     [5] = LAYOUT_split_3x6_3( // NAVIGATION
     
        _______, _______, _______, _______, _______, _______,
            S(G(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        
        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR,
            KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______,
        
        _______, _______, _______, _______, _______, _______,
            KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,
        
        _______, _______, _______,
            KC_ENT, KC_BSPC, KC_DEL
    ),
       
    [6] = LAYOUT_split_3x6_3( // MOUSE
        
        _______, _______, _______, _______, _______, _______,
            S(G(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        
        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR,
            _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        
        _______, _______, _______, _______, _______, _______,
            _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
        
        _______, _______, _______,
            KC_BTN2, KC_BTN1, KC_BTN3
    ),
    
    [7] = LAYOUT_split_3x6_3( // SYMBOL
        
        _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,
            _______, _______, _______, _______, _______, _______,
        
        _______, KC_QUESTION, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,
            KC_HYPR, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______,
        
        _______, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,
            _______, _______, _______, _______, _______, _______,
        
        KC_LPRN, KC_RPRN, KC_UNDS,
            _______, _______, _______
    ),
    
    [8] = LAYOUT_split_3x6_3( // NUMBERS
        
        _______, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,
            _______, _______, _______, _______, _______, _______,
        
        _______, KC_SLASH, KC_4, KC_5, KC_6, KC_EQL,
            KC_HYPR, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______,
        
        _______, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,
            _______, _______, _______, _______, _______, _______,
        
        KC_DOT, KC_0, KC_MINS,
            _______, _______, _______
    ),
    
    [9] = LAYOUT_split_3x6_3( // FUNCTION
        
        _______, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,
            _______, _______, _______, _______, _______, _______,
        
        _______, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL,
            KC_HYPR, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______,
        
        _______, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS,
            _______, _______, _______, _______, _______, _______,
        
        KC_APP, KC_SPC, KC_TAB,
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

// Workaround for https://github.com/qmk/qmk_firmware/issues/16406
void suspend_wakeup_init_user(void) {
    NVIC_SystemReset();
};

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
        // QWERTY hrm
        case LGUI_T(KC_A):
        case LALT_T(KC_S):
        case LSFT_T(KC_D):
        case LCTL_T(KC_F):
        case RCTL_T(KC_J):
        case RSFT_T(KC_K):
        case RALT_T(KC_L):
        case RGUI_T(KC_SEMICOLON):
            return 150;
        default:
            return 0;  // global_quick_tap is not applied
    }
};

// Quick tapping term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_ESC):
        case LT(5, KC_SPC): 
        case LT(6, KC_TAB):
        case LT(7, KC_ENT): 
        case LT(8, KC_BSPC): 
        case LT(9, KC_DEL):
            return 0; // 0 to disable
        default:
            return QUICK_TAP_TERM;
    }
};

// Hold on other key press per key
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Immediately select the hold action when another key is pressed.
        case LT(4, KC_ESC):
        case LT(5, KC_SPC): 
        case LT(6, KC_TAB):
        case LT(7, KC_ENT): 
        case LT(8, KC_BSPC): 
        case LT(9, KC_DEL):
        // hrm shifts
        case LSFT_T(KC_N):
        case RSFT_T(KC_E):
        case LSFT_T(KC_D):
        case RSFT_T(KC_K):
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
        case RGUI_T(KC_A):
        // QWERTY hrm
        case LGUI_T(KC_A):
        case RGUI_T(KC_SEMICOLON):
            return 300;
        // Thumb keys
        case LT(4, KC_ESC):
        case LT(5, KC_SPC): 
        case LT(6, KC_TAB):
        case LT(7, KC_ENT): 
        case LT(8, KC_BSPC): 
        case LT(9, KC_DEL):
            return 175;
        default:
            return TAPPING_TERM;
    }
};

bool pre_process_record_user(uint16_t keycode, keyrecord_t* record) {
    // enable global quick tap before other processing. Note this will not work properly with capsword.
    if (!process_global_quick_tap(keycode, record)) {return false; }
    return true;
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

