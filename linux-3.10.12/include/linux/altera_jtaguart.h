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
Tue Jul 19 12:42:57 PDT 2016
Fri Jul 22 15:54:52 PDT 2016
Sun, Jul 24, 2016  3:19:26 PM
Mon, Jul 25, 2016  9:58:02 PM
