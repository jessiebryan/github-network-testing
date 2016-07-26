/*
 * altera_uart.h -- Altera UART driver defines.
 */

#ifndef	__ALTUART_H
#define	__ALTUART_H

struct altera_uart_platform_uart {
	unsigned long mapbase;	/* Physical address base */
	unsigned int irq;	/* Interrupt vector */
	unsigned int uartclk;	/* UART clock rate */
	unsigned int bus_shift;	/* Bus shift (address stride) */
};

#endif /* __ALTUART_H */
Tue Jul 19 12:48:39 PDT 2016
Fri Jul 22 16:05:34 PDT 2016
Sun, Jul 24, 2016  4:42:29 PM
Mon, Jul 25, 2016 11:30:19 PM
