#include_next <mcuconf.h>

#undef RP_SIO_USE_UART0
#define RP_SIO_USE_UART0 TRUE

#undef SERIAL_USART_DRIVER
#define SERIAL_USART_DRIVER SIOD0