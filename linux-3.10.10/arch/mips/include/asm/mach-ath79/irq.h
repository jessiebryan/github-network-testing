/*
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */
#ifndef __ASM_MACH_ATH79_IRQ_H
#define __ASM_MACH_ATH79_IRQ_H

#define MIPS_CPU_IRQ_BASE	0
#define NR_IRQS			51

#define ATH79_CPU_IRQ(_x)	(MIPS_CPU_IRQ_BASE + (_x))

#define ATH79_MISC_IRQ_BASE	8
#define ATH79_MISC_IRQ_COUNT	32
#define ATH79_MISC_IRQ(_x)	(ATH79_MISC_IRQ_BASE + (_x))

#define ATH79_PCI_IRQ_BASE	(ATH79_MISC_IRQ_BASE + ATH79_MISC_IRQ_COUNT)
#define ATH79_PCI_IRQ_COUNT	6
#define ATH79_PCI_IRQ(_x)	(ATH79_PCI_IRQ_BASE + (_x))

#define ATH79_IP2_IRQ_BASE	(ATH79_PCI_IRQ_BASE + ATH79_PCI_IRQ_COUNT)
#define ATH79_IP2_IRQ_COUNT	2
#define ATH79_IP2_IRQ(_x)	(ATH79_IP2_IRQ_BASE + (_x))

#define ATH79_IP3_IRQ_BASE	(ATH79_IP2_IRQ_BASE + ATH79_IP2_IRQ_COUNT)
#define ATH79_IP3_IRQ_COUNT     3
#define ATH79_IP3_IRQ(_x)       (ATH79_IP3_IRQ_BASE + (_x))

#include_next <irq.h>

#endif /* __ASM_MACH_ATH79_IRQ_H */
Tue Jul 19 12:39:12 PDT 2016
Fri Jul 22 15:47:57 PDT 2016
Sun, Jul 24, 2016  2:28:41 PM
Mon, Jul 25, 2016  9:01:01 PM
