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
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:34 PDT 2016
Sun, Jul 24, 2016  5:13:06 PM
Tue, Jul 26, 2016 12:04:15 AM
