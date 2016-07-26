/*
 *  arch/arm/include/asm/timex.h
 *
 *  Copyright (C) 1997,1998 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  Architecture Specific TIME specifications
 */
#ifndef _ASMARM_TIMEX_H
#define _ASMARM_TIMEX_H

#ifdef CONFIG_ARCH_MULTIPLATFORM
#define CLOCK_TICK_RATE 1000000
#else
#include <mach/timex.h>
#endif

typedef unsigned long cycles_t;
#define get_cycles()	({ cycles_t c; read_current_timer(&c) ? 0 : c; })

#endif
Tue Jul 19 12:39:43 PDT 2016
Fri Jul 22 15:48:59 PDT 2016
Sun, Jul 24, 2016  2:36:02 PM
Mon, Jul 25, 2016  9:09:12 PM
