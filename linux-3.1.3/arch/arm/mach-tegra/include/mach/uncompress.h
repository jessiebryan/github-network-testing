/*
 * arch/arm/mach-tegra/include/mach/uncompress.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
 *	Erik Gilling <konkers@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_TEGRA_UNCOMPRESS_H
#define __MACH_TEGRA_UNCOMPRESS_H

#include <linux/types.h>
#include <linux/serial_reg.h>

#include <mach/iomap.h>

static void putc(int c)
{
	volatile u8 *uart = (volatile u8 *)TEGRA_DEBUG_UART_BASE;
	int shift = 2;

	if (uart == NULL)
		return;

	while (!(uart[UART_LSR << shift] & UART_LSR_THRE))
		barrier();
	uart[UART_TX << shift] = c;
}

static inline void flush(void)
{
}

static inline void arch_decomp_setup(void)
{
	volatile u8 *uart = (volatile u8 *)TEGRA_DEBUG_UART_BASE;
	int shift = 2;

	if (uart == NULL)
		return;

	uart[UART_LCR << shift] |= UART_LCR_DLAB;
	uart[UART_DLL << shift] = 0x75;
	uart[UART_DLM << shift] = 0x0;
	uart[UART_LCR << shift] = 3;
}

static inline void arch_decomp_wdog(void)
{
}

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:48 PM
Mon, Jul 25, 2016  6:38:44 PM
Mon, Jul 25, 2016  7:51:37 PM
Tue, Jul 26, 2016  2:26:49 PM
