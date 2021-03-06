/*
 * arch/arm/mach-h720x/include/mach/system.h
 *
 * Copyright (C) 2001-2002 Jungjun Kim, Hynix Semiconductor Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 * arch/arm/mach-h720x/include/mach/system.h
 *
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H
#include <mach/hardware.h>

static void arch_idle(void)
{
	CPU_REG (PMU_BASE, PMU_MODE) = PMU_MODE_IDLE;
	nop();
	nop();
	CPU_REG (PMU_BASE, PMU_MODE) = PMU_MODE_RUN;
	nop();
	nop();
}


static __inline__ void arch_reset(char mode, const char *cmd)
{
	CPU_REG (PMU_BASE, PMU_STAT) |= PMU_WARMRESET;
}

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:17 PM
Mon, Jul 25, 2016  6:38:08 PM
Mon, Jul 25, 2016  7:51:01 PM
Tue, Jul 26, 2016  2:26:15 PM
