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

    [0] = LAYOUT_5x7( // DWARF
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, TG(7),
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,

        KC_TAB, KC_F, KC_L, KC_H, KC_D, KC_V, KC_GRV,
                KC_CAPS, KC_Z, KC_G, KC_O, KC_U, KC_DOT, KC_BSLS,

        KC_ESC, LGUI_T(KC_S), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_T), KC_M, KC_PAGE_UP,
                KC_HOME, KC_P, RCTL_T(KC_Y), RSFT_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_SLASH,

        MT(MOD_LSFT, KC_BSPC), KC_X, KC_J, KC_B, KC_K, KC_Q, KC_PAGE_DOWN,
                KC_END, KC_C, KC_W, KC_QUOTE, KC_COMMA, KC_SEMICOLON, MT(MOD_RSFT, KC_DEL),

        KC_LBRC, KC_LEFT, KC_RIGHT,
        KC_LCTL, KC_LALT, KC_ENT, OSL(4),
        OSL(5), KC_SPACE, KC_RGUI, KC_RCTL,
        KC_DOWN, KC_UP, KC_RBRC

    ),

    [1] = LAYOUT_5x7( // QWERTY
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, TG(7),
                TG(8), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,

        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_GRV,
                KC_CAPS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,

        KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_PAGE_UP,
                KC_HOME, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), KC_QUOTE,

        MT(MOD_LSFT, KC_BSPC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PAGE_DOWN,
                KC_END, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MT(MOD_RSFT, KC_DEL),

        KC_LBRC, KC_LEFT, KC_RIGHT,
        KC_LCTL, KC_LALT, KC_ENT, OSL(4),
        OSL(5), KC_SPACE, KC_RGUI, KC_RCTL,
        KC_DOWN, KC_UP, KC_RBRC

    ),

    [2] = LAYOUT_5x7(
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

    [3] = LAYOUT_5x7(
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

    [4] = LAYOUT_5x7( // LEFT
        QK_BOOT, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______,

        _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______,
                _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,

        SELECTWORD, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), SELECTWORD, _______,
                _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______,

        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______,
                _______, _______, KC_BACKSPACE, KC_TAB, KC_ENT, KC_DEL, _______,

        _______, _______, _______,
        _______, _______, _______, _______,
        OSL(6), _______, _______, _______,
        _______, _______, _______

    ),

    [5] = LAYOUT_5x7( // RIGHT

        _______, _______, _______, _______, _______, _______, _______,
                _______, _______, TO(0), TO(1), _______, _______, _______,

        _______, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, _______,
                _______, _______, _______, _______, _______, _______, _______,

        _______, KC_SLSH, KC_4, KC_5, KC_6, KC_BSLS, _______,
                _______, _______, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), _______,

        _______, KC_GRV, KC_1, KC_2, KC_3, KC_EQL, _______,
                _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______,
        _______, _______, KC_0, OSL(6),
        _______, _______, _______, _______,
        _______, _______, _______

    ),

      [6] = LAYOUT_5x7( // BOTH
        _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______,

        KC_PLUS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, _______,
                _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,

        KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, _______,
                _______, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,

        KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______,
                _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12,

        _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______

    ),

    [7] = LAYOUT_5x7( // NUMPAD
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
        KC_P0, KC_P0, KC_PDOT

    ),

      [8] = LAYOUT_5x7( // FUNCTION
        KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______,
                _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12,

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
	case MT(MOD_LSFT, KC_BSPC):
	case MT(MOD_RSFT, KC_DEL):
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

 void keyboard_post_init_user(void) {
   // Customise these values to desired behaviour
    debug_enable=true;
    debug_keyboard=false;
    debug_matrix=false;
 };