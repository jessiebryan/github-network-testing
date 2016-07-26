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
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:53 PDT 2016
Sun, Jul 24, 2016  5:15:23 PM
Tue, Jul 26, 2016 12:06:47 AM
