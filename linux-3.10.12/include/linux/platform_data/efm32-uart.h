/*
 *
 *
 */
#ifndef __LINUX_PLATFORM_DATA_EFM32_UART_H__
#define __LINUX_PLATFORM_DATA_EFM32_UART_H__

#include <linux/types.h>

/**
 * struct efm32_uart_pdata
 * @location: pinmux location for the I/O pins (to be written to the ROUTE
 * 	register)
 */
struct efm32_uart_pdata {
	u8 location;
};
#endif /* ifndef __LINUX_PLATFORM_DATA_EFM32_UART_H__ */
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:57 PDT 2016
Sun, Jul 24, 2016  3:20:07 PM
Mon, Jul 25, 2016  9:58:47 PM
