/*
 *  arch/arm/mach-rpc/include/mach/system.h
 *
 *  Copyright (C) 1996-1999 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/io.h>
#include <mach/hardware.h>
#include <asm/hardware/iomd.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	iomd_writeb(0, IOMD_ROMCR0);

	/*
	 * Jump into the ROM
	 */
	cpu_reset(0);
}
Tue Jul 19 12:36:39 PDT 2016
Fri Jul 22 15:43:07 PDT 2016
Sun, Jul 24, 2016  1:53:23 PM
Mon, Jul 25, 2016  8:20:38 PM
