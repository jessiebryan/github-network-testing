/*
 * arch/arm/mach-mv78xx0/include/mach/io.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __ASM_ARCH_IO_H
#define __ASM_ARCH_IO_H

#include "mv78xx0.h"

#define IO_SPACE_LIMIT		0xffffffff

static inline void __iomem *__io(unsigned long addr)
{
	return (void __iomem *)((addr - MV78XX0_PCIE_IO_PHYS_BASE(0))
					+ MV78XX0_PCIE_IO_VIRT_BASE(0));
}

#define __io(a)			__io(a)
#define __mem_pci(a)		(a)


#endif
Tue Jul 19 12:33:14 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:56 PM
Mon, Jul 25, 2016  6:18:32 PM
Mon, Jul 25, 2016  7:31:49 PM
