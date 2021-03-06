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
Tue Jul 19 12:41:53 PDT 2016
Fri Jul 22 15:53:09 PDT 2016
Sun, Jul 24, 2016  3:06:03 PM
Mon, Jul 25, 2016  9:42:59 PM
