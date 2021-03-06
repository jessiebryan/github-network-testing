/*
 * arch/arm/mach-iop32x/include/mach/io.h
 *
 * Copyright (C) 2001 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __IO_H
#define __IO_H

#include <asm/hardware/iop3xx.h>

extern void __iomem *__iop3xx_ioremap(unsigned long cookie, size_t size,
	unsigned int mtype);
extern void __iop3xx_iounmap(void __iomem *addr);

#define IO_SPACE_LIMIT		0xffffffff
#define __io(p)		((void __iomem *)IOP3XX_PCI_IO_PHYS_TO_VIRT(p))
#define __mem_pci(a)		(a)

#define __arch_ioremap	__iop3xx_ioremap
#define __arch_iounmap	__iop3xx_iounmap

#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:49 PM
Mon, Jul 25, 2016  6:18:23 PM
Mon, Jul 25, 2016  7:31:41 PM
Tue, Jul 26, 2016  2:07:56 PM
