/*
 * linux/include/asm-parisc/timex.h
 *
 * PARISC architecture timex specifications
 */
#ifndef _ASMPARISC_TIMEX_H
#define _ASMPARISC_TIMEX_H

#include <asm/system.h>

#define CLOCK_TICK_RATE	1193180 /* Underlying HZ */

typedef unsigned long cycles_t;

static inline cycles_t get_cycles (void)
{
	return mfctl(16);
}

#endif
Tue Jul 19 12:37:22 PDT 2016
Fri Jul 22 15:44:30 PDT 2016
Sun, Jul 24, 2016  2:03:34 PM
Mon, Jul 25, 2016  8:32:42 PM
