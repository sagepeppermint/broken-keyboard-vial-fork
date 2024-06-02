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
    [0] = LAYOUT_split_3x6_3( // DWARF
    KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V,                                       KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BSLS,
    KC_ESC, LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M,       KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,
    KC_LSFT, KC_X, KC_J, KC_B, KC_K, KC_Q,                                      KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, KC_RSFT,
                              KC_ESC,   LT(4, KC_BSPC),  LT(5, KC_ENT),        LT(3, KC_TAB), LT(2, KC_SPACE), KC_DEL
    ),

    [1] = LAYOUT_split_3x6_3( // QWERTY
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                                       KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
    KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,       KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                                      KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT,
                              KC_ESC,   LT(4, KC_BSPC),  LT(5, KC_ENT),        LT(3, KC_TAB), LT(2, KC_SPACE), KC_DEL
    ),

    [2] = LAYOUT_split_3x6_3( // right main
    XXXXXXX, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_SLSH, KC_4, KC_5, KC_6, KC_BSLS,                    KC_CAPS, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
    XXXXXXX, KC_GRV, KC_1, KC_2, KC_3, KC_EQL,                      XXXXXXX, SELECTWORD, CAPS_WORD_LOCK, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_DOT, KC_0, KC_MINS,    _______, _______, _______
    ),

    [3] = LAYOUT_split_3x6_3( // right inner
    XXXXXXX, KC_LCBR, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RCBR,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_QUESTION, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_PIPE,        KC_CAPS, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
    XXXXXXX, KC_TILDE, KC_EXCLAIM, KC_AT, KC_HASH, KC_PLUS,                     XXXXXXX, SELECTWORD, CAPS_WORD_LOCK, XXXXXXX, XXXXXXX, XXXXXXX,
                            KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_UNDERSCORE,       _______, _______, _______
    ),

    [4] = LAYOUT_split_3x6_3( // left main
    XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, XXXXXXX,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS,                   KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
    XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), LSG(KC_S),                 KC_DEL, KC_BACKSPACE, KC_TAB, KC_ENT, KC_INS, XXXXXXX,
                            _______, _______, _______,                      KC_TAB, KC_SPACE, _______
    ),

    [5] = LAYOUT_split_3x6_3( // left inner
    QK_BOOT, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, XXXXXXX,                   KC_PAUS, KC_F9, KC_F10, KC_F11, KC_F12, TO(0),
    XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS,                   KC_SCRL, KC_F5, KC_F6, KC_F7, KC_F8, TO(1),
    XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), LSG(KC_S),                 KC_PSCR, KC_F1, KC_F2, KC_F3, KC_F4, XXXXXXX,
                            _______, _______, _______,                      KC_TAB, KC_SPACE, _______
    ),

/*     [2] = LAYOUT_split_3x6_3(
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          _______,   _______,  _______,     _______, _______, _______
  ), */
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
            return 200;
        default:
            return 0;  // global_quick_tap is not applied
    }
};

// Quick tapping term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_BSPC):
        case LT(5, KC_ENT):
        case LT(3, KC_TAB):
        case LT(2, KC_SPACE):
            return 0; // 0 to disable
        default:
            return QUICK_TAP_TERM;
    }
};

// Hold on other key press per key
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Immediately select the hold action when another key is pressed.
        case LT(4, KC_BSPC):
        case LT(5, KC_ENT):
        case LT(3, KC_TAB):
        case LT(2, KC_SPACE):
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
        case LT(5, KC_ENT):
        case LT(3, KC_TAB):
        case LT(2, KC_SPACE):
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