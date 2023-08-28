#pragma once

// RGB settings
#define RGB_MATRIX_LED_COUNT 6
// RGB settings for the MCU
#define WS2812_PWM_CHANNEL 1  

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

