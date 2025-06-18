#pragma once

#include_next <board.h>

// change the crystal oscillator to 12 mhz, up from the default of 8 mhz
#undef STM32_HSECLK
#define STM32_HSECLK 12000000
