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
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:07 PM
Mon, Jul 25, 2016  6:35:31 PM
Mon, Jul 25, 2016  7:48:28 PM
