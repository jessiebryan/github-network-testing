/*
 * linux/include/asm/timex.h
 *
 * sparc architecture timex specifications
 */
#ifndef _ASMsparc_TIMEX_H
#define _ASMsparc_TIMEX_H

#define CLOCK_TICK_RATE	1193180 /* Underlying HZ */

/* XXX Maybe do something better at some point... -DaveM */
typedef unsigned long cycles_t;
#define get_cycles()	(0)

#endif
Tue Jul 19 12:48:25 PDT 2016
Fri Jul 22 16:05:07 PDT 2016
Sun, Jul 24, 2016  4:39:02 PM
Mon, Jul 25, 2016 11:26:31 PM
