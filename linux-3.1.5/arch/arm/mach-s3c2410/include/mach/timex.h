/* arch/arm/mach-s3c2410/include/mach/timex.h
 *
 * Copyright (c) 2003-2005 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C2410 - time parameters
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
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:42:00 PDT 2016
Sun, Jul 24, 2016  1:45:10 PM
Mon, Jul 25, 2016  8:10:57 PM
Tue, Jul 26, 2016  2:44:55 PM
