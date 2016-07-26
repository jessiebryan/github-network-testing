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
Tue Jul 19 12:44:56 PDT 2016
Fri Jul 22 15:58:31 PDT 2016
Sun, Jul 24, 2016  3:47:48 PM
Mon, Jul 25, 2016 10:29:33 PM
