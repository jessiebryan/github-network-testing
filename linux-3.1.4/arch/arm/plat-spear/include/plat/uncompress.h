/*
 * arch/arm/plat-spear/include/plat/uncompress.h
 *
 * Serial port stubs for kernel decompress status messages
 *
 * Copyright (C) 2009 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include <linux/io.h>
#include <linux/amba/serial.h>
#include <mach/hardware.h>

#ifndef __PLAT_UNCOMPRESS_H
#define __PLAT_UNCOMPRESS_H
/*
 * This does not append a newline
 */
static inline void putc(int c)
{
	void __iomem *base = (void __iomem *)SPEAR_DBG_UART_BASE;

	while (readl_relaxed(base + UART01x_FR) & UART01x_FR_TXFF)
		barrier();

	writel_relaxed(c, base + UART01x_DR);
}

static inline void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()

#endif /* __PLAT_UNCOMPRESS_H */
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:57 PDT 2016
Sun, Jul 24, 2016  1:37:18 PM
Mon, Jul 25, 2016  8:01:39 PM
Tue, Jul 26, 2016  2:36:13 PM
