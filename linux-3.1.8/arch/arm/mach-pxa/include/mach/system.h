/*
 * arch/arm/mach-pxa/include/mach/system.h
 *
 * Author:	Nicolas Pitre
 * Created:	Jun 15, 2001
 * Copyright:	MontaVista Software Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <asm/proc-fns.h>
#include "hardware.h"
#include "pxa2xx-regs.h"

static inline void arch_idle(void)
{
	cpu_do_idle();
}


void arch_reset(char mode, const char *cmd);
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:14 PDT 2016
Sun, Jul 24, 2016  2:01:37 PM
Mon, Jul 25, 2016  8:30:23 PM
