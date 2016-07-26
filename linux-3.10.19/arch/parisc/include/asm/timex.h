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
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:38 PDT 2016
Sun, Jul 24, 2016  4:19:48 PM
Mon, Jul 25, 2016 11:05:10 PM
