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
Tue Jul 19 12:39:56 PDT 2016
Fri Jul 22 15:49:25 PDT 2016
Sun, Jul 24, 2016  2:39:09 PM
Mon, Jul 25, 2016  9:12:40 PM
