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
Tue Jul 19 12:41:28 PDT 2016
Fri Jul 22 15:52:29 PDT 2016
Sun, Jul 24, 2016  3:01:01 PM
Mon, Jul 25, 2016  9:37:19 PM
