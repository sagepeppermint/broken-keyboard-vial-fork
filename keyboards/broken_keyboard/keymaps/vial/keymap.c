#include QMK_KEYBOARD_H

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    {{6,5}, {5,5}, {4,5}, {3,5}, {2,5}, {1,5}, {0,5}},
    {{6,6}, {5,6}, {4,6}, {3,6}, {2,6}, {1,6}, {0,6}},
    {{6,7}, {5,7}, {4,7}, {3,7}, {2,7}, {1,7}, {0,7}},
    {{6,8}, {5,8}, {4,8}, {3,8}, {2,8}, {1,8}, {0,8}},
    {{6,9}, {5,9}, {4,9}, {3,9}, {2,9}, {1,9}, {0,9}},
    {{6,0}, {5,0}, {4,0}, {3,0}, {2,0}, {1,0}, {0,0}},
    {{6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {1,1}, {0,1}},
    {{6,2}, {5,2}, {4,2}, {3,2}, {2,2}, {1,2}, {0,2}},
    {{6,3}, {5,3}, {4,3}, {3,3}, {2,3}, {1,3}, {0,3}},
    {{6,4}, {5,4}, {4,4}, {3,4}, {2,4}, {1,4}, {0,4}},
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_5x7( // QWERTY
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINUS,
                KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, XXXXXXX,
                XXXXXXX, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSPACE,
        
        OSM(MOD_LCTL), MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LCTL, KC_F), KC_G, KC_PAGE_UP,
                XXXXXXX, KC_H, MT(MOD_RCTL, KC_J), MT(MOD_RSFT, KC_K), MT(MOD_LALT, KC_L), MT(MOD_RGUI, KC_SEMICOLON), KC_QUOTE,
        
        OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PAGE_DOWN,
                XXXXXXX, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, OSM(MOD_RSFT),
        
        KC_LCTL, KC_LGUI, KC_LALT, TT(4), TT(5), KC_ENT, TT(3),
                TT(6), KC_SPACE, TT(7), TT(8), KC_RALT, KC_RGUI, KC_RCTL
        
    ),

    [1] = LAYOUT_5x7( // HALMAK
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINUS,
                KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        
        KC_TAB, KC_W, KC_L, KC_R, KC_B, KC_Z, XXXXXXX,
                XXXXXXX, KC_SEMICOLON, KC_Q, KC_U, KC_D, KC_J, KC_BACKSPACE,
        
        KC_LCTL, KC_S, KC_H, KC_N, KC_T, KC_COMMA, KC_PAGE_UP,
                XXXXXXX, KC_DOT, KC_A, KC_E, KC_O, KC_I, KC_QUOTE,
        
        OSM(MOD_LSFT), KC_F, KC_M, KC_V, KC_C, KC_SLASH, KC_PAGE_DOWN,
                XXXXXXX, KC_G, KC_P, KC_X, KC_K, KC_Y, OSM(MOD_RSFT),
        
        KC_LCTL, KC_LGUI, KC_LALT, TT(4), TT(5), KC_ENT, TT(3),
                TT(6), KC_SPACE, TT(7), TT(8), KC_RALT, KC_RGUI, KC_RCTL
        
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


 
    [3] = LAYOUT_5x7( // LEFT arrows and navigation - RIGHT punctuation not fitting into regular
        LCA(KC_DEL), _______, _______, _______, _______, _______, SH_TG,
		_______, _______, _______, _______, _______, _______, _______,
        
        KC_CAPS_LOCK, KC_LEFT_ANGLE_BRACKET, KC_HOME, LGUI(KC_TAB), KC_END, KC_AUDIO_VOL_UP, _______,
		        _______, KC_UNDERSCORE, KC_PLUS, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, KC_PIPE, KC_TILDE,
		        
        _______, KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_UP, KC_RIGHT, KC_MUTE, KC_PRINT_SCREEN,
		        _______, KC_MINUS, KC_EQUAL, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_GRAVE, 
        
        _______, KC_RIGHT_ANGLE_BRACKET, KC_PAGE_UP, KC_DOWN, KC_PAGE_DOWN, KC_AUDIO_VOL_DOWN, LSG(KC_S),
		        _______, _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		        TT(9), _______, _______, _______, _______, _______, _______
        
    ),

 
    [4] = LAYOUT_5x7( // F-keys, shifted numbers, numbers
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
        
        _______, KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_UNDERSCORE,
		        KC_PLUS, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, _______,
		        
        _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINUS,
		        KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______
        
    ),

 
    [5] = LAYOUT_5x7( // RIGHT Numpad
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, KC_NUM_LOCK, KC_PSLS, KC_PAST, KC_CALCULATOR, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, KC_P7, KC_P8, KC_P9, KC_PMNS, _______,
		        
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, KC_P1, KC_P2, KC_P3, KC_PENT, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, _______, _______, KC_P0, KC_P0, KC_PDOT
        
    ),

 
    [6] = LAYOUT_5x7( // the RIGHT SH_TG is required to have matching toggle buttons for swap
        _______, _______, _______, _______, _______, _______, _______,
		        SH_TG, _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
        
        _______, _______, _______, _______, _______, _______, TT(9),
		_______, _______, _______, _______, _______, _______, _______
        
    ),

  
    [7] = LAYOUT_5x7(
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

 
    [8] = LAYOUT_5x7(
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

  
    [9] = LAYOUT_5x7( // macros and configs
        _______, TG(1), _______, DM_REC1, DM_REC2, _______, _______,
		        _______, _______, _______, _______, _______, _______, MAGIC_TOGGLE_NKRO,
        
        _______, _______, _______, DM_PLY1, DM_PLY2, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,
		        
        _______, _______, _______, _______, _______, _______, _______,
		        _______, _______, _______, _______, _______, _______, QK_BOOT,
        
        _______, MAGIC_TOGGLE_GUI, MAGIC_TOGGLE_CONTROL_CAPSLOCK, _______, _______, _______, _______,
		        _______, _______, _______, _______, _______, _______, QK_REBOOT,
        
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


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_left()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_left()) {
	    // Host Keyboard Layer Status
	    oled_write_P(PSTR("Layer: "), false);

	    switch (get_highest_layer(layer_state)) {
		case 0:
		    oled_write_P(PSTR("0\n"), false);
		    break;
		case 1:
		    oled_write_P(PSTR("1\n"), false);
		    break;
		case 2:
		    oled_write_P(PSTR("2\n"), false);
		    break;
		case 3:
		    oled_write_P(PSTR("3\n"), false);
		    break;
		case 4:
		    oled_write_P(PSTR("4\n"), false);
		    break;
		case 5:
		    oled_write_P(PSTR("5\n"), false);
		    break;
		case 6:
		    oled_write_P(PSTR("6\n"), false);
		    break;
		case 7:
		    oled_write_P(PSTR("7\n"), false);
		    break;
		case 8:
		    oled_write_P(PSTR("8\n"), false);
		    break;
		case 9:
		    oled_write_P(PSTR("9\n"), false);
		    break;
		case 10:
		    oled_write_P(PSTR("10\n"), false);
		    break;
		case 11:
		    oled_write_P(PSTR("11\n"), false);
		    break;
		case 12:
		    oled_write_P(PSTR("12\n"), false);
		    break;
		case 13:
		    oled_write_P(PSTR("13\n"), false);
		    break;
		case 14:
		    oled_write_P(PSTR("14\n"), false);
		    break;
		case 15:
		    oled_write_P(PSTR("15\n"), false);
		    break;
		default:
		    // Or use the write_ln shortcut over adding '\n' to the end of your string
		    oled_write_ln_P(PSTR("Undefined"), false);
	    }

	    // Host Keyboard LED Status
	    led_t led_state = host_keyboard_led_state();
	    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
	    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
	    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
	    
	    return false;
    } else {
	    oled_write_P(PSTR("Broken Keyboard\n  SHAHNETWORK"), false);
            oled_scroll_left();  // Turns on scrolling
    }
    return false;
}
#endif

