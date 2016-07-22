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
Tue Jul 19 12:36:39 PDT 2016
Fri Jul 22 15:43:07 PDT 2016
