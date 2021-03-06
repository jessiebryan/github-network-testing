/*
 * arch/arm/mach-prima2/include/mach/uncompress.h
 *
 * Copyright (c) 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */

#ifndef __ASM_ARCH_UNCOMPRESS_H
#define __ASM_ARCH_UNCOMPRESS_H

#include <linux/io.h>
#include <mach/hardware.h>
#include <mach/uart.h>

void arch_decomp_setup(void)
{
}

#define arch_decomp_wdog()

static __inline__ void putc(char c)
{
	/*
	 * during kernel decompression, all mappings are flat:
	 *  virt_addr == phys_addr
	 */
	while (__raw_readl(SIRFSOC_UART1_PA_BASE + SIRFSOC_UART_TXFIFO_STATUS)
		& SIRFSOC_UART1_TXFIFO_FULL)
		barrier();

	__raw_writel(c, SIRFSOC_UART1_PA_BASE + SIRFSOC_UART_TXFIFO_DATA);
}

static inline void flush(void)
{
}

#endif

Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:38 PDT 2016
Sun, Jul 24, 2016  1:20:18 PM
Mon, Jul 25, 2016  6:28:34 PM
Mon, Jul 25, 2016  7:41:40 PM
Tue, Jul 26, 2016  2:17:24 PM
