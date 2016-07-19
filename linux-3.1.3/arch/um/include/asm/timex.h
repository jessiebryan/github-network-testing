#ifndef __UM_TIMEX_H
#define __UM_TIMEX_H

typedef unsigned long cycles_t;

static inline cycles_t get_cycles (void)
{
	return 0;
}

#define CLOCK_TICK_RATE (HZ)

#endif
Tue Jul 19 12:35:08 PDT 2016
