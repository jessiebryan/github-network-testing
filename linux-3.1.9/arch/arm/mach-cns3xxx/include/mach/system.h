/*
 * Copyright 2000 Deep Blue Solutions Ltd
 * Copyright 2003 ARM Limited
 * Copyright 2008 Cavium Networks
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_SYSTEM_H
#define __MACH_SYSTEM_H

#include <linux/io.h>
#include <asm/proc-fns.h>

static inline void arch_idle(void)
{
	/*
	 * This should do all the clock switching
	 * and wait for interrupt tricks
	 */
	cpu_do_idle();
}

void arch_reset(char mode, const char *cmd);

#endif
Tue Jul 19 12:37:51 PDT 2016
Fri Jul 22 15:45:18 PDT 2016
Sun, Jul 24, 2016  2:09:26 PM
Mon, Jul 25, 2016  8:39:37 PM
