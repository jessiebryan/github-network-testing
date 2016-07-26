/*
 * OpenRISC Linux
 *
 * Linux architectural port borrowing liberally from similar works of
 * others.  All original copyrights apply as per the original source
 * declaration.
 *
 * OpenRISC implementation:
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_OPENRISC_TIMEX_H
#define __ASM_OPENRISC_TIMEX_H

#define get_cycles get_cycles

#include <asm-generic/timex.h>
#include <asm/spr.h>
#include <asm/spr_defs.h>

static inline cycles_t get_cycles(void)
{
	return mfspr(SPR_TTCR);
}

/* This isn't really used any more */
#define CLOCK_TICK_RATE 1000

#define ARCH_HAS_READ_CURRENT_TIMER

#endif
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:48 PDT 2016
Sun, Jul 24, 2016  1:14:00 PM
Mon, Jul 25, 2016  6:21:00 PM
Mon, Jul 25, 2016  7:34:15 PM
