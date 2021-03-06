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
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:53 PDT 2016
Sun, Jul 24, 2016  1:59:06 PM
Mon, Jul 25, 2016  8:27:24 PM
