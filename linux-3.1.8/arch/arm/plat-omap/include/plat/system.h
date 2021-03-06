/*
 * Copied from arch/arm/mach-sa1100/include/mach/system.h
 * Copyright (c) 1999 Nicolas Pitre <nico@fluxnic.net>
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/proc-fns.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

extern void (*arch_reset)(char, const char *);

#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:17 PDT 2016
Sun, Jul 24, 2016  2:01:58 PM
Mon, Jul 25, 2016  8:30:48 PM
