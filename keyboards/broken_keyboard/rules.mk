# MCU details
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

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no      	# Console for debug
COMMAND_ENABLE = no	        # Commands for debug and configuration
SLEEP_LED_ENABLE = no      	# Breathing sleep LED during USB suspend
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no       	# Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Split keyboard
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart

# OLED
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# Other
CAPS_WORD_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
SWAP_HANDS_ENABLE = yes

