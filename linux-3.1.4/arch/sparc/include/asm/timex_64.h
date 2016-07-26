/*
 * linux/include/asm/timex.h
 *
 * sparc64 architecture timex specifications
 */
#ifndef _ASMsparc64_TIMEX_H
#define _ASMsparc64_TIMEX_H

#include <asm/timer.h>

#define CLOCK_TICK_RATE	1193180 /* Underlying HZ */

/* Getting on the cycle counter on sparc64. */
typedef unsigned long cycles_t;
#define get_cycles()	tick_ops->get_tick()

#define ARCH_HAS_READ_CURRENT_TIMER

#endif
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:15 PDT 2016
Sun, Jul 24, 2016  1:39:34 PM
Mon, Jul 25, 2016  8:04:20 PM
Tue, Jul 26, 2016  2:38:44 PM
