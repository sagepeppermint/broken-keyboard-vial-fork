#include QMK_KEYBOARD_H

enum custom_keycodes {
    CAPS_WORD_LOCK = SAFE_RANGE,
    SELECTWORD,
    M_UPDIR,
    M_KEYBOARD,
};

#include "features/swap_hands.c"
#include "features/achordion.h"
#include "features/global_quick_tap.h"
#include "features/caps_word_lock.c"
#include "features/oled.c"
#include "features/select_word.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_5x7( // DWARF HRM
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, KC_F, KC_L, KC_H, KC_D, KC_V, _______,
            _______, KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,

        _______, LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M, _______,
            _______, KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,

        _______, KC_X, KC_J, KC_B, KC_K, KC_Q, _______,
            _______, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,

        _______, _______, _______, 
        _______, _______, KC_SPACE, KC_TAB,
        KC_BSPC, KC_ENT, _______, KC_DEL, 
        _______, _______, _______

    ),

    [1] = LAYOUT_5x7( // DWARF
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, KC_F, KC_L, KC_H, KC_D, KC_V, _______,
            _______, KC_Z, KC_G, KC_O, KC_U, KC_DOT, _______,

        _______, KC_S, KC_R, KC_N, KC_T, KC_M, _______,
            _______, KC_P, KC_Y, KC_E, KC_I, KC_A, KC_SLASH,

        _______, KC_X, KC_J, KC_B, KC_K, KC_Q, _______,
            _______, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, _______,

        _______, _______, _______, 
        _______, _______, KC_SPACE, KC_TAB,
        KC_BSPC, KC_ENT, _______, _______, 
        _______, _______, _______

    ),

    [2] = LAYOUT_5x7( // QWERTY HRM
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, KC_Q, KC_W, KC_E, KC_R, KC_T, _______,
            _______, KC_Y, KC_U, KC_I, KC_O, KC_P, _______,

        _______, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, _______,
            _______, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), _______,

        _______, KC_Z, KC_X, KC_C, KC_V, KC_B, _______,
            _______, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,

        _______, _______, _______, 
        _______, _______, KC_SPACE, KC_TAB,
        KC_BSPC, KC_ENT, _______, _______, 
        _______, _______, _______

    ),

    [3] = LAYOUT_5x7( // QWERTY
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, KC_Q, KC_W, KC_E, KC_R, KC_T, _______,
            _______, KC_Y, KC_U, KC_I, KC_O, KC_P, _______,

        _______, KC_A, KC_S, KC_D, KC_F, KC_G, _______,
            _______, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, _______,

        _______, KC_Z, KC_X, KC_C, KC_V, KC_B, _______,
            _______, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,

        _______, _______, _______, 
        _______, _______, KC_SPACE, KC_TAB,
        KC_BSPC, KC_ENT, _______, _______, 
        _______, _______, _______

    ),

    [4] = LAYOUT_5x7( // NAVIGATION
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,

        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,
            _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,

        _______, _______, _______, 
        _______, _______, _______, _______,
        KC_BSPC, KC_ENT, _______, KC_DEL, 
        _______, _______, _______

    ),

    [5] = LAYOUT_5x7( // MEDIA

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, QK_BOOT, DF(0), DF(1), QK_REBOOT, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,
            _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, 
        _______, _______, _______, _______,
        KC_MSTP, KC_MPLY, _______, KC_MUTE, 
        _______, _______, _______

    ),

      [6] = LAYOUT_5x7( // MOUSE
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,

        _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,
            _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,

        _______, _______, _______, 
        _______, _______, _______, _______,
        KC_BTN2, KC_BTN1, _______, KC_BTN3, 
        _______, _______, _______

    ),

    [7] = LAYOUT_5x7( // NUMBER
        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, 
        _______, _______, _______, _______,
        _______, _______, _______, _______, 
        _______, _______, _______

    ),

      [8] = LAYOUT_5x7( // FUNCTION
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

    [9] = LAYOUT_5x7(
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

    [10] = LAYOUT_5x7(
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

bool pre_process_record_user(uint16_t keycode, keyrecord_t* record) {
    // enable global quick tap before other processing. Note this will not work properly with capsword.
    if (!process_global_quick_tap(keycode, record)) {return false; }
    return true;
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    // achordion
    if (!process_achordion(keycode, record)) { return false; };
    // caps word lock
    process_caps_word_lock(keycode, record);
    if (!process_caps_word_lock_shortcuts(keycode, record)) { return false; };
    // select word
    if (!process_select_word(keycode, record, SELECTWORD)) { return false; };

    // Macros
    switch (keycode) {

    case M_KEYBOARD: SEND_STRING(/*k*/"eyboard"); break;

    case M_UPDIR: SEND_STRING(/*.*/"./"); break;

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
    achordion_task();
    select_word_task();
};

// Achordion which keys count as tap hold
bool achordion_chord(uint16_t tap_hold_keycode,
					 keyrecord_t* tap_hold_record,
					 uint16_t other_keycode,
					 keyrecord_t* other_record) {
    if (tap_hold_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; } // Ignore bottom row and thumbcluster
    if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; } // Ignore bottom row and thumbcluster
    return achordion_opposite_hands(tap_hold_record, other_record);
};

// Achordion time to decide tap vs hold (on top of normal tapping term)
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode){
    // Thumb keys
	case LT(4, KC_DEL):
	case LT(5, KC_ENT):
		return 0; // disable for these buttons
	default:
        return 300;  // ms
    }
};

// Achordion eager mods, define the modifiers themselves
bool achordion_eager_mod(uint8_t mod) {
    switch (mod) {
        case MOD_LSFT:
        case MOD_RSFT:
        case MOD_LCTL:
        case MOD_RCTL:
        case MOD_LALT:
        case MOD_RALT:
//      case MOD_LGUI:
//      case MOD_RGUI:
        return true;    // Eagerly apply mods
    default:
        return false;
    }
};

// Repeat key alternate
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    if ((mods & MOD_MASK_CTRL)) {  // Was Ctrl held?
        switch (keycode) {
            case KC_Y: return C(KC_Z);  // Ctrl + Y reverses to Ctrl + Z.
            case KC_Z: return C(KC_Y);  // Ctrl + Z reverses to Ctrl + Y.
        }
    }

    bool shifted = (mods & MOD_MASK_SHIFT);  // Was Shift held?
    switch (keycode) {
        case KC_TAB:
            if (shifted) {        // If the last key was Shift + Tab,
                return KC_TAB;    // ... the reverse is Tab.
            } else {              // Otherwise, the last key was Tab,
                return S(KC_TAB); // ... and the reverse is Shift + Tab.
            }
    }

    // Same finger bigrams DWARF
    if (IS_LAYER_ON(0)) {
        switch (keycode) {
            case KC_U: return KC_I;  // For "UI" bigram.
            case LALT_T(KC_R): return KC_L;  // For "RL" bigram.
            case KC_O: return KC_E;  // For "OE" bigram.
            case RSFT_T(KC_E): return KC_O;  // For "EO" bigram.
        }
    }

    // Macros
    switch (keycode) {
        case KC_K: return M_KEYBOARD;
        case KC_DOT: return M_UPDIR;
    }

    // Opposites
    switch (keycode) {
        case KC_LEFT: return KC_RGHT;
        case KC_RGHT: return KC_LEFT;
        case KC_UP: return KC_DOWN;
        case KC_DOWN: return KC_UP;
        case KC_HOME: return KC_END;
        case KC_END: return KC_HOME;
        case KC_PGUP: return KC_PGDN;
        case KC_PGDN: return KC_PGUP;

    // Completions
        case KC_LCBR: return KC_RCBR;
        case KC_LBRC: return KC_RBRC;
        case KC_LEFT_PAREN: return KC_RIGHT_PAREN;
    }

    return KC_NO;  // Defer to default definitions.
}
