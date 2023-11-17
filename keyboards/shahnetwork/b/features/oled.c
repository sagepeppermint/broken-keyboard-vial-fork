#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	if (!is_keyboard_left()) {
		return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
	}

	return rotation;
};

bool oled_task_user(void) {
	if (is_keyboard_left()) {
		// Host Keyboard Layer Status
		oled_write_P(PSTR("Layer: "), false);

		switch (get_highest_layer(layer_state)) {
		case 0:
			oled_write_P(PSTR("DWARF HRM\n"), false);
			break;
		case 1:
			oled_write_P(PSTR("DWARF\n"), false);
			break;
		case 2:
			oled_write_P(PSTR("QWERTY HRM\n"), false);
			break;
		case 3:
			oled_write_P(PSTR("QWERTY\n"), false);
			break;
		case 4:
			oled_write_P(PSTR("NAVIGATION\n"), false);
			break;
		case 5:
			oled_write_P(PSTR("FUNCTION\n"), false);
			break;
		case 6:
			oled_write_P(PSTR("NUMBER\n"), false);
			break;
		case 7:
			oled_write_P(PSTR("SYMBOL\n"), false);
			break;
		case 8:
			oled_write_P(PSTR("NUMPAD\n"), false);
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
};
#endif