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
Tue Jul 19 12:51:56 PDT 2016
Fri Jul 22 16:11:51 PDT 2016
Sun, Jul 24, 2016  5:29:36 PM
Tue, Jul 26, 2016 12:22:28 AM
