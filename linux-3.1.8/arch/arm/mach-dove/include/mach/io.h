/*
 * arch/arm/mach-dove/include/mach/io.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __ASM_ARCH_IO_H
#define __ASM_ARCH_IO_H

#include "dove.h"

#define IO_SPACE_LIMIT		0xffffffff

#define __io(a)  	((void __iomem *)(((a) - DOVE_PCIE0_IO_BUS_BASE) + \
						 DOVE_PCIE0_IO_VIRT_BASE))
#define __mem_pci(a)	(a)

#endif
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:10 PDT 2016
Sun, Jul 24, 2016  2:01:14 PM
Mon, Jul 25, 2016  8:29:55 PM
