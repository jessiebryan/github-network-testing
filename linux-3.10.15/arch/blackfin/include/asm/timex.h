/*
 * asm-blackfin/timex.h: cpu cycles!
 *
 * Copyright 2004-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _ASM_BLACKFIN_TIMEX_H
#define _ASM_BLACKFIN_TIMEX_H

#define CLOCK_TICK_RATE	1000000	/* Underlying HZ */

typedef unsigned long long cycles_t;

static inline cycles_t get_cycles(void)
{
	unsigned long tmp, tmp2;
	__asm__ __volatile__("%0 = cycles; %1 = cycles2;" : "=d"(tmp), "=d"(tmp2));
	return tmp | ((cycles_t)tmp2 << 32);
}

#endif
Tue Jul 19 12:44:28 PDT 2016
Fri Jul 22 15:57:42 PDT 2016
Sun, Jul 24, 2016  3:41:22 PM
Mon, Jul 25, 2016 10:22:24 PM
