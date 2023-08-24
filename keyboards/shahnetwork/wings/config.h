/* Copyright 2021 alittlepeace
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B7 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, F7, F6, F5, F4, F1, F0 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

// #define BACKLIGHT_PIN B6
// #define BACKLIGHT_LEVELS 5

// #define LED_CAPS_LOCK_PIN C7
// #define LED_PIN_ON_STATE 0

// #define RGB_DI_PIN E2
// #ifdef RGB_DI_PIN
// #define RGBLED_NUM 14
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
// #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */

// #endif


/* use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1
/* typing options */
/* caps word */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 1000  // 5000 default
/* one shot keys */
#define ONESHOT_TAP_TOGGLE 5  // Tapping this number of times holds the key until tapped once again
#define ONESHOT_TIMEOUT 1000 // 5000 default
/* tapping toggle */
#define TAPPING_TOGGLE 5 // 5 default
/* tapping settings */
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD