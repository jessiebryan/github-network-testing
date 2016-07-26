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
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:28:58 PM
Mon, Jul 25, 2016  6:38:56 PM
Mon, Jul 25, 2016  7:51:49 PM
Tue, Jul 26, 2016  2:27:00 PM
