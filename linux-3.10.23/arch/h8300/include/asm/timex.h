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
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:17 PDT 2016
Sun, Jul 24, 2016  4:55:35 PM
Mon, Jul 25, 2016 11:44:59 PM
