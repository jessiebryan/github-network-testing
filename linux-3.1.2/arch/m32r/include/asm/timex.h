#ifndef _ASM_M32R_TIMEX_H
#define _ASM_M32R_TIMEX_H

/*
 * linux/include/asm-m32r/timex.h
 *
 * m32r architecture timex specifications
 */

#define CLOCK_TICK_RATE	(CONFIG_BUS_CLOCK / CONFIG_TIMER_DIVIDE)
#define CLOCK_TICK_FACTOR	20	/* Factor of both 1000000 and CLOCK_TICK_RATE */

#ifdef __KERNEL__
/*
 * Standard way to access the cycle counter.
 * Currently only used on SMP.
 */

typedef unsigned long long cycles_t;

static __inline__ cycles_t get_cycles (void)
{
	return 0;
}
#endif  /* __KERNEL__ */

#endif  /* _ASM_M32R_TIMEX_H */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:32 PM
Mon, Jul 25, 2016  6:30:02 PM
Mon, Jul 25, 2016  7:43:06 PM
Tue, Jul 26, 2016  2:18:47 PM
