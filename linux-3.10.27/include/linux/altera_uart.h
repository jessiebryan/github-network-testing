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
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:13:00 PDT 2016
Sun, Jul 24, 2016  5:38:14 PM
Tue, Jul 26, 2016 12:31:59 AM
