/*
 * altera_jtaguart.h -- Altera JTAG UART driver defines.
 */

#ifndef	__ALTJUART_H
#define	__ALTJUART_H

#define ALTERA_JTAGUART_MAJOR	204
#define ALTERA_JTAGUART_MINOR	186

struct altera_jtaguart_platform_uart {
	unsigned long mapbase;	/* Physical address base */
	unsigned int irq;	/* Interrupt vector */
};

#endif /* __ALTJUART_H */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:53 PDT 2016
Sun, Jul 24, 2016  1:59:06 PM
Mon, Jul 25, 2016  8:27:24 PM
