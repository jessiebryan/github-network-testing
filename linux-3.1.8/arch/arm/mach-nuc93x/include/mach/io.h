/*
 * arch/arm/mach-nuc93x/include/mach/io.h
 *
 * Copyright (c) 2008 Nuvoton technology corporation
 * All rights reserved.
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT	0xffffffff

/*
 * 1:1 mapping for ioremapped regions.
 */

#define __mem_pci(a)	(a)
#define __io(a)		__typesafe_io(a)

#endif
Tue Jul 19 12:37:13 PDT 2016
Fri Jul 22 15:44:12 PDT 2016
Sun, Jul 24, 2016  2:01:28 PM
Mon, Jul 25, 2016  8:30:13 PM
