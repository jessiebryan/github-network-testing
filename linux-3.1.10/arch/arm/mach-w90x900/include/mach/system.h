/*
 * arch/arm/mach-w90x900/include/mach/system.h
 *
 * Copyright (c) 2008 Nuvoton technology corporation
 * All rights reserved.
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * Based on arch/arm/mach-s3c2410/include/mach/system.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <linux/io.h>
#include <asm/proc-fns.h>
#include <mach/map.h>
#include <mach/regs-timer.h>

#define	WTCR	(TMR_BA + 0x1C)
#define	WTCLK	(1 << 10)
#define	WTE	(1 << 7)
#define	WTRE	(1 << 1)

static void arch_idle(void)
{
}

static void arch_reset(char mode, const char *cmd)
{
	if (mode == 's') {
		/* Jump into ROM at address 0 */
		cpu_reset(0);
	} else {
		__raw_writel(WTE | WTRE | WTCLK, WTCR);
	}
}

Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:22 PM
Mon, Jul 25, 2016  6:19:03 PM
Mon, Jul 25, 2016  7:32:20 PM
Tue, Jul 26, 2016  2:08:32 PM
