/*
 * linux/include/asm-h8300/timex.h
 *
 * H8/300 architecture timex specifications
 */
#ifndef _ASM_H8300_TIMEX_H
#define _ASM_H8300_TIMEX_H

#define CLOCK_TICK_RATE (CONFIG_CPU_CLOCK*1000/8192) /* Timer input freq. */

typedef unsigned long cycles_t;
extern short h8300_timer_count;

static inline cycles_t get_cycles(void)
{
	return 0;
}

#endif
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:50 PM
Mon, Jul 25, 2016  8:02:17 PM
Tue, Jul 26, 2016  2:36:48 PM
