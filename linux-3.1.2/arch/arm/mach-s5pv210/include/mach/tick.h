/* linux/arch/arm/mach-s5pv210/include/mach/tick.h
 *
 * Copyright (c) 2009 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Based on arch/arm/mach-s3c6400/include/mach/tick.h
 *
 * S5PV210 - Timer tick support definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_TICK_H
#define __ASM_ARCH_TICK_H __FILE__

static inline u32 s3c24xx_ostimer_pending(void)
{
	u32 pend = __raw_readl(VA_VIC0 + VIC_RAW_STATUS);
	return pend & (1 << (IRQ_TIMER4_VIC - S5P_IRQ_VIC0(0)));
}

#define TICK_MAX	(0xffffffff)

#endif /* __ASM_ARCH_TICK_H */
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:39 PDT 2016
Sun, Jul 24, 2016  1:20:28 PM
Mon, Jul 25, 2016  6:28:45 PM
Mon, Jul 25, 2016  7:41:51 PM
Tue, Jul 26, 2016  2:17:35 PM
