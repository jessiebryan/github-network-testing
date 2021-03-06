/*
 * arch/arm/mach-ixp23xx/include/mach/uncompress.h
 *
 * Copyright (C) 2002-2004 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_UNCOMPRESS_H
#define __ASM_ARCH_UNCOMPRESS_H

#include <mach/ixp23xx.h>
#include <linux/serial_reg.h>

#define UART_BASE	((volatile u32 *)IXP23XX_UART1_PHYS)

static inline void putc(char c)
{
	int j;

	for (j = 0; j < 0x1000; j++) {
		if (UART_BASE[UART_LSR] & UART_LSR_THRE)
			break;
		barrier();
	}

	UART_BASE[UART_TX] = c;
}

static inline void flush(void)
{
}

#define arch_decomp_setup()
#define arch_decomp_wdog()


#endif
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:21 PM
Mon, Jul 25, 2016  6:38:12 PM
Mon, Jul 25, 2016  7:51:05 PM
Tue, Jul 26, 2016  2:26:19 PM
