#pragma once

/* split communication using serial USART */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* set handedness in eeprom */
#define EE_HANDS

/* fix USB timeout issues */
// #define SPLIT_USB_TIMEOUT 5000 // 2000 is default
// #define SPLIT_USB_TIMEOUT_POLL 100 // 10 is default
// #define USB_SUSPEND_WAKEUP_DELAY 200 // 0 is default
#define SPLIT_WATCHDOG_ENABLE
// #define SPLIT_WATCHDOG_TIMEOUT 3000

/* bootmagic lite keys */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

/* typing options */
/* caps word */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 2000  // 5000 default
/* one shot keys */
#define ONESHOT_TAP_TOGGLE 5  // Tapping this number of times holds the key until tapped once again
#define ONESHOT_TIMEOUT 2000 // 5000 default
/* tapping toggle */
#define TAPPING_TOGGLE 5 // 5 default
/* tapping settings */
#define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
// #define TAPPING_FORCE_HOLD_PER_KEY

