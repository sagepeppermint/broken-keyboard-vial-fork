

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY
#define TAPPING_FORCE_HOLD_PER_KEY
#define QUICK_TAP_TERM_PER_KEY


/* select word */
#define SELECT_WORD_TIMEOUT 2000  // When idle, clear state after 2 seconds.

/* tapping settings */
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 175

#define OLED_BRIGHTNESS 8 // 128 default?
#define OLED_TIMEOUT 1000 // ms
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

/* use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1