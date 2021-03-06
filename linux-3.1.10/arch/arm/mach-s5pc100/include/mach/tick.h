/* linux/arch/arm/mach-s5pc100/include/mach/tick.h
 *
 * Copyright 2009 Samsung Electronics Co.
 *	Byungho Min <bhmin@samsung.com>
 *
 * S3C64XX - Timer tick support definitions
 *
 * Based on mach-s3c6400/include/mach/tick.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_TICK_H
#define __ASM_ARCH_TICK_H __FILE__

/* note, the timer interrutps turn up in 2 places, the vic and then
 * the timer block. We take the VIC as the base at the moment.
 */
static inline u32 s3c24xx_ostimer_pending(void)
{
	u32 pend = __raw_readl(VA_VIC0 + VIC_RAW_STATUS);
	return pend & (1 << (IRQ_TIMER4_VIC - S5P_IRQ_VIC0(0)));
}

#define TICK_MAX	(0xffffffff)

#endif /* __ASM_ARCH_TICK_H */
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:13 PM
Mon, Jul 25, 2016  6:18:52 PM
Mon, Jul 25, 2016  7:32:09 PM
Tue, Jul 26, 2016  2:08:22 PM
