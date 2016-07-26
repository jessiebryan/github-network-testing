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
Tue Jul 19 12:36:04 PDT 2016
Fri Jul 22 15:41:56 PDT 2016
Sun, Jul 24, 2016  1:44:42 PM
Mon, Jul 25, 2016  8:10:24 PM
Tue, Jul 26, 2016  2:44:24 PM
