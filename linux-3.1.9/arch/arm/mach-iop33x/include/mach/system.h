/*
 * arch/arm/mach-iop33x/include/mach/system.h
 *
 * Copyright (C) 2001 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <asm/hardware/iop3xx.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	*IOP3XX_PCSR = 0x30;

	/* Jump into ROM at address 0 */
	cpu_reset(0);
}
Tue Jul 19 12:37:51 PDT 2016
Fri Jul 22 15:45:19 PDT 2016
Sun, Jul 24, 2016  2:09:33 PM
Mon, Jul 25, 2016  8:39:45 PM
