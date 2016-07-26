/* timex.h: FR-V architecture timex specifications
 */
#ifndef _ASM_TIMEX_H
#define _ASM_TIMEX_H

#define CLOCK_TICK_RATE		1193180 /* Underlying HZ */
#define CLOCK_TICK_FACTOR	20	/* Factor of both 1000000 and CLOCK_TICK_RATE */

typedef unsigned long cycles_t;

static inline cycles_t get_cycles(void)
{
	return 0;
}

#define vxtime_lock()		do {} while (0)
#define vxtime_unlock()		do {} while (0)

#endif

Tue Jul 19 12:45:44 PDT 2016
Fri Jul 22 16:00:06 PDT 2016
Sun, Jul 24, 2016  4:00:10 PM
Mon, Jul 25, 2016 10:43:19 PM
