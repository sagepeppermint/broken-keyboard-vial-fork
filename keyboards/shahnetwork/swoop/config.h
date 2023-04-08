#pragma once
#include "config_common.h"

// communication between sides
#define SERIAL_USART_TX_PIN GP1

#undef  SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19

/* use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* set handedness in eeprom */
#define EE_HANDS

/* bootmagic lite keys */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0


/* typing options */
/* caps word */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 500  // 5000 default
/* one shot keys */
#define ONESHOT_TAP_TOGGLE 5  // Tapping this number of times holds the key until tapped once again
#define ONESHOT_TIMEOUT 500 // 5000 default
#define TAPPING_TOGGLE 2
/* tapping things */
#define HOLD_ON_OTHER_KEY_PRESS
// #define TAPPING_FORCE_HOLD
