/*
 * Author: <linux@telechips.com>
 * Created: June 10, 2008
 * Description: LINUX SYSTEM FUNCTIONS for TCC83x
 *
 * Copyright (C) 2008-2009 Telechips
 *
 * Licensed under the terms of the GPL v2.
 *
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H
#include <linux/clk.h>

#include <asm/mach-types.h>
#include <mach/hardware.h>

extern void plat_tcc_reboot(void);

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	plat_tcc_reboot();
}

#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:48 PDT 2016
Sun, Jul 24, 2016  1:29:03 PM
Mon, Jul 25, 2016  6:39:02 PM
Mon, Jul 25, 2016  7:51:55 PM
Tue, Jul 26, 2016  2:27:06 PM
