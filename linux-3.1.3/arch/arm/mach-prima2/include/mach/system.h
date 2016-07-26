/*
 * arch/arm/mach-prima2/include/mach/system.h
 *
 * Copyright (c) 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */

#ifndef __MACH_SYSTEM_H__
#define __MACH_SYSTEM_H__

#include <linux/bitops.h>
#include <mach/hardware.h>

#define SIRFSOC_SYS_RST_BIT  BIT(31)

extern void __iomem *sirfsoc_rstc_base;

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	writel(SIRFSOC_SYS_RST_BIT, sirfsoc_rstc_base);
}

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:34 PM
Mon, Jul 25, 2016  6:38:27 PM
