/*
 * arch/arm/machnuc93x/include/mach/system.h
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

#include <asm/proc-fns.h>

static void arch_idle(void)
{
}

static void arch_reset(char mode, const char *cmd)
{
	cpu_reset(0);
}

Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:29 PM
Mon, Jul 25, 2016  6:38:21 PM
Mon, Jul 25, 2016  7:51:15 PM
Tue, Jul 26, 2016  2:26:28 PM
