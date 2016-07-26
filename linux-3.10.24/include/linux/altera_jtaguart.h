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
Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:13 PDT 2016
Sun, Jul 24, 2016  5:10:17 PM
Tue, Jul 26, 2016 12:01:10 AM
