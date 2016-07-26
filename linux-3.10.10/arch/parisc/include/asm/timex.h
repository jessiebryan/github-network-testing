/*
 * linux/include/asm-parisc/timex.h
 *
 * PARISC architecture timex specifications
 */
#ifndef _ASMPARISC_TIMEX_H
#define _ASMPARISC_TIMEX_H


#define CLOCK_TICK_RATE	1193180 /* Underlying HZ */

typedef unsigned long cycles_t;

static inline cycles_t get_cycles (void)
{
	return mfctl(16);
}

#endif
Tue Jul 19 12:39:14 PDT 2016
Fri Jul 22 15:48:01 PDT 2016
Sun, Jul 24, 2016  2:29:12 PM
Mon, Jul 25, 2016  9:01:36 PM
