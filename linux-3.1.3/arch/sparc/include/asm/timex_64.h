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
Tue Jul 19 12:35:07 PDT 2016
Fri Jul 22 15:40:07 PDT 2016
Sun, Jul 24, 2016  1:31:19 PM
Mon, Jul 25, 2016  7:54:34 PM
Tue, Jul 26, 2016  2:29:37 PM
