/*
 * arch/arm/mach-ks8695/include/mach/uncompress.h
 *
 * Copyright (C) 2006 Ben Dooks <ben@simtec.co.uk>
 * Copyright (C) 2006 Simtec Electronics
 *
 * KS8695 - Kernel uncompressor
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_UNCOMPRESS_H
#define __ASM_ARCH_UNCOMPRESS_H

#include <linux/io.h>
#include <mach/regs-uart.h>

static void putc(char c)
{
	while (!(__raw_readl(KS8695_UART_PA + KS8695_URLS) & URLS_URTHRE))
		barrier();

	__raw_writel(c, KS8695_UART_PA + KS8695_URTH);
}

static inline void flush(void)
{
	while (!(__raw_readl(KS8695_UART_PA + KS8695_URLS) & URLS_URTE))
		barrier();
}

#define arch_decomp_setup()
#define arch_decomp_wdog()

#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:52 PM
Mon, Jul 25, 2016  6:18:28 PM
Mon, Jul 25, 2016  7:31:46 PM
Tue, Jul 26, 2016  2:08:00 PM
