/*
 *  arch/arm/mach-ebsa110/include/mach/uncompress.h
 *
 *  Copyright (C) 1996,1997,1998 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/serial_reg.h>

#define SERIAL_BASE	((unsigned char *)0xf0000be0)

/*
 * This does not append a newline
 */
static inline void putc(int c)
{
	unsigned char v, *base = SERIAL_BASE;

	do {
		v = base[UART_LSR << 2];
		barrier();
	} while (!(v & UART_LSR_THRE));

	base[UART_TX << 2] = c;
}

static inline void flush(void)
{
	unsigned char v, *base = SERIAL_BASE;

	do {
		v = base[UART_LSR << 2];
		barrier();
	} while ((v & (UART_LSR_TEMT|UART_LSR_THRE)) !=
		 (UART_LSR_TEMT|UART_LSR_THRE));
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
Tue Jul 19 12:51:26 PDT 2016
Fri Jul 22 16:10:50 PDT 2016
Sun, Jul 24, 2016  5:22:23 PM
Tue, Jul 26, 2016 12:14:31 AM
