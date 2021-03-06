/*
 * Copyright (c) 2011 Zhang, Keguang <keguang.zhang@gmail.com>
 *
 * Loongson 1 watchdog register definitions.
 *
 * This program is free software; you can redistribute	it and/or modify it
 * under  the terms of	the GNU General	 Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __ASM_MACH_LOONGSON1_REGS_WDT_H
#define __ASM_MACH_LOONGSON1_REGS_WDT_H

#define LS1X_WDT_REG(x) \
		((void __iomem *)KSEG1ADDR(LS1X_WDT_BASE + (x)))

#define LS1X_WDT_EN			LS1X_WDT_REG(0x0)
#define LS1X_WDT_SET			LS1X_WDT_REG(0x4)
#define LS1X_WDT_TIMER			LS1X_WDT_REG(0x8)

#endif /* __ASM_MACH_LOONGSON1_REGS_WDT_H */
Tue Jul 19 12:50:15 PDT 2016
Fri Jul 22 16:08:36 PDT 2016
Sun, Jul 24, 2016  5:05:39 PM
Mon, Jul 25, 2016 11:56:02 PM
