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
Tue Jul 19 12:35:30 PDT 2016
Fri Jul 22 15:40:50 PDT 2016
Sun, Jul 24, 2016  1:36:35 PM
Mon, Jul 25, 2016  8:00:48 PM
Tue, Jul 26, 2016  2:35:24 PM
