/*
 *  arch/arm/mach-footbridge/include/mach/io.h
 *
 *  Copyright (C) 1997-1999 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  Modifications:
 *   06-12-1997	RMK	Created.
 *   07-04-1999	RMK	Major cleanup
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

/*
 * Translation of various i/o addresses to host addresses for !CONFIG_MMU
 */
#define PCIO_BASE       0x7c000000
#define __io(a)			((void __iomem *)(PCIO_BASE + (a)))

#endif
Tue Jul 19 12:50:08 PDT 2016
Fri Jul 22 16:08:21 PDT 2016
Sun, Jul 24, 2016  5:03:50 PM
Mon, Jul 25, 2016 11:53:59 PM
