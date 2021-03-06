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
Tue Jul 19 12:53:28 PDT 2016
Fri Jul 22 16:14:50 PDT 2016
Sun, Jul 24, 2016  5:51:45 PM
Tue, Jul 26, 2016 12:46:56 AM
