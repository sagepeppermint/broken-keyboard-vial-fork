#pragma once

/* split communication using serial USART */
#define SERIAL_USART_TX_PIN GP1  // The GPIO pin that is used split communication.

/* use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* set handedness in eeprom */
#define EE_HANDS

/* fix USB timeout issues */
#define SPLIT_USB_TIMEOUT 2000 // 2000 is default
#define SPLIT_USB_TIMEOUT_POLL 100 // 10 is default
#define USB_SUSPEND_WAKEUP_DELAY 200 // 0 is default
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 5000

/* bootmagic lite keys */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

/* typing options */
/* one shot keys */
#define ONESHOT_TAP_TOGGLE 5  // Tapping this number of times holds the key until tapped once again
#define ONESHOT_TIMEOUT 2000 // 5000 default
/* tapping toggle */
#define TAPPING_TOGGLE 5 // 5 default
/* tapping settings */
#define TAPPING_TERM 200

/* OLED */
#ifdef OLED_ENABLE
#define I2C1_SCL_PIN        GP3
#define I2C1_SDA_PIN        GP2
#define OLED_BRIGHTNESS 8 // 128 default?
#define OLED_TIMEOUT 3000  // ms
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#endif