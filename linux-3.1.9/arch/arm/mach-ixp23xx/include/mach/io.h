/*
 * arch/arm/mach-ixp23xx/include/mach/io.h
 *
 * Original Author: Naeem M Afzal <naeem.m.afzal@intel.com>
 * Maintainer: Deepak Saxena <dsaxena@plexity.net>
 *
 * Copyright (C) 2003-2005 Intel Corp.
 * Copyright (C) 2005 MontaVista Software, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_IO_H
#define __ASM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(p)		((void __iomem*)((p) + IXP23XX_PCI_IO_VIRT))
#define __mem_pci(a)	(a)

static inline void __iomem *
ixp23xx_ioremap(unsigned long addr, unsigned long size, unsigned int mtype)
{
	if (addr >= IXP23XX_PCI_MEM_START &&
		addr <= IXP23XX_PCI_MEM_START + IXP23XX_PCI_MEM_SIZE) {
		if (addr + size > IXP23XX_PCI_MEM_START + IXP23XX_PCI_MEM_SIZE)
			return NULL;

		return (void __iomem *)
 			((addr - IXP23XX_PCI_MEM_START) + IXP23XX_PCI_MEM_VIRT);
	}

	return __arm_ioremap(addr, size, mtype);
}

static inline void
ixp23xx_iounmap(void __iomem *addr)
{
	if ((((u32)addr) >= IXP23XX_PCI_MEM_VIRT) &&
	    (((u32)addr) < IXP23XX_PCI_MEM_VIRT + IXP23XX_PCI_MEM_SIZE))
		return;

	__iounmap(addr);
}

#define __arch_ioremap	ixp23xx_ioremap
#define __arch_iounmap	ixp23xx_iounmap


#endif
Tue Jul 19 12:37:51 PDT 2016
Fri Jul 22 15:45:19 PDT 2016
Sun, Jul 24, 2016  2:09:34 PM
Mon, Jul 25, 2016  8:39:46 PM
