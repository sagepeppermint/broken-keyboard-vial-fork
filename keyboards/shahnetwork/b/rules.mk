# MCU things
BOOTLOADER = stm32-dfu
ARMV = 7
MCU = cortex-m4
MCU_FAMILY = STM32
MCU_SERIES = STM32F4xx
MCU_LDSCRIPT = STM32F412xE_EEPROM
MCU_STARTUP = stm32f4xx
BOARD = SHAH_STM32F412RET6
USE_FPU = yes
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = legacy
 
# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Split keyboard
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart

# OLED
OLED_ENABLE = yes
OLED_DRIVER = ssd1306

# Other
CAPS_WORD_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
SWAP_HANDS_ENABLE = yes
#NO_SUSPEND_POWER_DOWN = yes
REPEAT_KEY_ENABLE = yes

SRC += features/achordion.c
SRC += features/global_quick_tap.c
SRC += features/select_word.c