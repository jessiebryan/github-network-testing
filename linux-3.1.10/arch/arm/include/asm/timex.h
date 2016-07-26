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

#include <mach/timex.h>

typedef unsigned long cycles_t;

static inline cycles_t get_cycles (void)
{
	return 0;
}

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:37 PM
Mon, Jul 25, 2016  6:18:10 PM
Mon, Jul 25, 2016  7:31:28 PM
Tue, Jul 26, 2016  2:07:43 PM
