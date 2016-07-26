/*
 * linux/arch/arm/mach-mmp/include/mach/system.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_MACH_SYSTEM_H
#define __ASM_MACH_SYSTEM_H

#include <mach/cputype.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	if (cpu_is_pxa168())
		cpu_reset(0xffff0000);
	else
		cpu_reset(0);
}
#endif /* __ASM_MACH_SYSTEM_H */
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:08 PM
Mon, Jul 25, 2016  6:28:22 PM
Mon, Jul 25, 2016  7:41:28 PM
Tue, Jul 26, 2016  2:17:12 PM
