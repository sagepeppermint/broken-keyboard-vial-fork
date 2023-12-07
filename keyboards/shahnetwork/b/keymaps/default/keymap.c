#include QMK_KEYBOARD_H

enum custom_keycodes {
    CAPS_WORD_LOCK = SAFE_RANGE,
    SELECTWORD,
    // Other custom keys...
};

#include "features/swap_hands.c"
#include "features/global_quick_tap.h"
#include "features/caps_word_lock.c"
#include "features/oled.c"
#include "features/select_word.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_5x7( // DWARF HRM
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        
        KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V, KC_GRV,
                CAPS_WORD_LOCK, KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BSLS,
        
        OSM(MOD_LCTL), LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M, KC_PAGE_UP,
                KC_HOME, KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,
        
        MT(MOD_LSFT, KC_BSPC), KC_X, KC_J, KC_B, KC_K, KC_Q, KC_PAGE_DOWN,
                KC_END, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, MT(MOD_RSFT, KC_DEL),
        
        KC_LBRC, KC_LEFT, KC_RIGHT, 
        KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_DOWN, KC_UP, KC_RBRC
        
    ),

    [1] = LAYOUT_5x7( // DWARF
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        
        KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V, KC_GRV,
                CAPS_WORD_LOCK, KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BSLS,
        
        OSM(MOD_LCTL), KC_S, KC_R, KC_N, KC_T, KC_M, KC_PAGE_UP,
                KC_HOME, KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH,
        
        MT(MOD_LSFT, KC_BSPC), KC_X, KC_J, KC_B, KC_K, KC_Q, KC_PAGE_DOWN,
                KC_END, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, MT(MOD_RSFT, KC_DEL),
        
        KC_LBRC, KC_LEFT, KC_RIGHT, 
        KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_DOWN, KC_UP, KC_RBRC
        
    ),
        
    [2] = LAYOUT_5x7( // QWERTY HRM
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_GRV,
                KC_CAPS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        
        OSM(MOD_LCTL), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_PAGE_UP,
                KC_HOME, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,
        
        MT(MOD_LSFT, KC_BSPC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PAGE_DOWN,
                KC_END, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MT(MOD_RSFT, KC_DEL),
        
        KC_LBRC, KC_LEFT, KC_RIGHT, 
        KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_UP, KC_DOWN, KC_RBRC
        
    ),

    [3] = LAYOUT_5x7( // QWERTY
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_GRV,
                KC_CAPS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        
        OSM(MOD_LCTL), KC_A, KC_S, KC_D, KC_F, KC_G, KC_PAGE_UP,
                KC_HOME, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE,
        
        MT(MOD_LSFT, KC_BSPC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PAGE_DOWN,
                KC_END, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MT(MOD_RSFT, KC_DEL),
        
        KC_LBRC, KC_LEFT, KC_RIGHT, 
        KC_LCTL, KC_LALT, LT(4, KC_BSPC), LT(5, KC_DEL),
        LT(7, KC_ENT), LT(6, KC_SPACE), KC_RGUI, KC_RCTL, 
        KC_UP, KC_DOWN, KC_RBRC
        
    ),
 
    [4] = LAYOUT_5x7( // Left main
        _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______,
        
        _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
                _______, _______, KC_PGDN, KC_UP, KC_PGUP, KC_HOME, _______,
                
        KC_ESC, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CAPS, _______,
                _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, _______,
        
        KC_LSFT, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), LSG(KC_S), _______,
                _______, _______, KC_BACKSPACE, KC_TAB, KC_ENT, KC_DEL, KC_RSFT,
        
        _______, _______, _______, 
        _______, _______, _______, _______,
        KC_ENT, KC_SPACE, _______, _______, 
        _______, _______, _______
        
    ),
 
    [5] = LAYOUT_5x7( // Left alt
        QK_BOOT, _______, _______, _______, _______, _______, _______,
                _______, _______, TO(0), TO(1), TO(2), TO(3), _______,
        
        _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
                _______, KC_PAUS, KC_F9, KC_F10, KC_F11, KC_F12, _______,
                
        KC_ESC, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CAPS, _______,
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
                
        KC_ESC, KC_SLSH, KC_4, KC_5, KC_6, KC_BSLS, _______,
                _______, KC_CAPS, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,
        
        KC_LSFT, KC_GRV, KC_1, KC_2, KC_3, KC_EQL, _______,
                _______, _______, SELECTWORD, _______, _______, _______, KC_RSFT,
        
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
                
        KC_ESC, KC_QUESTION, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_PIPE, _______,
                _______, KC_CAPS, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,
        
        KC_LSFT, KC_TILDE, KC_EXCLAIM, KC_AT, KC_HASH, KC_PLUS, _______,
                _______, _______, SELECTWORD, _______, _______, _______, KC_RSFT,
        
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
        _______, _______, KC_PDOT
        
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

// Workaround for https://github.com/qmk/qmk_firmware/issues/16406
void suspend_wakeup_init_user(void) {
    NVIC_SystemReset();
}

// Quick tapping term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_BSPC):
        case LT(5, KC_DEL):
        case LT(7, KC_ENT):
        case LT(6, KC_SPACE):
            return QUICK_TAP_TERM; // 0 to disable
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
        case MT(MOD_LSFT, KC_BSPC):
        case MT(MOD_RSFT, KC_DEL):
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
        case LT(4, KC_BSPC):
        case LT(5, KC_DEL):
        case LT(7, KC_ENT): 
        case LT(6, KC_SPACE):
            return 175;
        default:
            return TAPPING_TERM;
    }
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    // caps word lock
    process_caps_word_lock(keycode, record);
    if (!process_caps_word_lock_shortcuts(keycode, record)) { return false; };
    // select word
    if (!process_select_word(keycode, record, SELECTWORD)) { return false; };

  // Macros
    switch (keycode) {
    
    case CAPS_WORD_LOCK:
        // Toggle `caps_word_lock_on`
        if (record->event.pressed) {
            if (caps_word_lock_on) {
                caps_word_lock_disable();
                return false;
            } else {
                caps_word_lock_enable();
                return false;
            }}
        return false; break;

    };
      
  return true;
};

void matrix_scan_user(void) {
    select_word_task();
};


// To enable debug, can delete
 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=false;
    debug_matrix=false;
 };
