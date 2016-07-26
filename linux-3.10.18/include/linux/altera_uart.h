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
Tue Jul 19 12:46:44 PDT 2016
Fri Jul 22 16:01:59 PDT 2016
Sun, Jul 24, 2016  4:14:46 PM
Mon, Jul 25, 2016 10:59:34 PM
