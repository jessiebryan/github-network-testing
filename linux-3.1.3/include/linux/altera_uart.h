/*
 * altera_uart.h -- Altera UART driver defines.
 */

#ifndef	__ALTUART_H
#define	__ALTUART_H

#include <linux/init.h>

struct altera_uart_platform_uart {
	unsigned long mapbase;	/* Physical address base */
	unsigned int irq;	/* Interrupt vector */
	unsigned int uartclk;	/* UART clock rate */
	unsigned int bus_shift;	/* Bus shift (address stride) */
};

int __init early_altera_uart_setup(struct altera_uart_platform_uart *platp);

#endif /* __ALTUART_H */
Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:32 PDT 2016
Sun, Jul 24, 2016  1:34:22 PM
Mon, Jul 25, 2016  7:58:11 PM
Tue, Jul 26, 2016  2:32:58 PM
