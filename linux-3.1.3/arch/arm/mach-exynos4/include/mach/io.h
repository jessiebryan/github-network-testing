/* linux/arch/arm/mach-exynos4/include/mach/io.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Copyright 2008-2010 Ben Dooks <ben-linux@fluff.org>
 *
 * Based on arch/arm/mach-s5p6442/include/mach/io.h
 *
 * Default IO routines for EXYNOS4
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
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:15 PM
Mon, Jul 25, 2016  6:38:05 PM
Mon, Jul 25, 2016  7:50:59 PM
Tue, Jul 26, 2016  2:26:13 PM
