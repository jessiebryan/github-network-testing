/* linux/arch/arm/mach-s5pv210/include/mach/io.h
 *
 * Copyright 2008-2010 Ben Dooks <ben-linux@fluff.org>
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Based on arch/arm/mach-s5p6442/include/mach/io.h
 *
 * Default IO routines for S5PV210
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H __FILE__

/* No current ISA/PCI bus support. */
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#define IO_SPACE_LIMIT (0xFFFFFFFF)

#endif /* __ASM_ARM_ARCH_IO_H */
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:14 PDT 2016
Sun, Jul 24, 2016  2:01:43 PM
Mon, Jul 25, 2016  8:30:30 PM
