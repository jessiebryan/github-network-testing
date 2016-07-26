/* arch/arm/mach-s3c64xx/include/mach/timex.h
 *
 * Copyright (c) 2003-2005 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C6400 - time parameters
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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:37 PDT 2016
Sun, Jul 24, 2016  5:13:26 PM
Tue, Jul 26, 2016 12:04:37 AM
