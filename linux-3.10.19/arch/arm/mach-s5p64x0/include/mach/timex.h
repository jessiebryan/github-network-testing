/* linux/arch/arm/mach-s5p64x0/include/mach/timex.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Copyright (c) 2003-2005 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S5P64X0 - time parameters
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_TIMEX_H
#define __ASM_ARCH_TIMEX_H

/* CLOCK_TICK_RATE needs to be evaluatable by the cpp, so making it
 * a variable is useless. It seems as long as we make our timers an
 * exact multiple of HZ, any value that makes a 1->1 correspondence
 * for the time conversion functions to/from jiffies is acceptable.
*/

#define CLOCK_TICK_RATE 12000000

#endif /* __ASM_ARCH_TIMEX_H */
Tue Jul 19 12:46:57 PDT 2016
Fri Jul 22 16:02:23 PDT 2016
Sun, Jul 24, 2016  4:17:53 PM
Mon, Jul 25, 2016 11:03:02 PM
