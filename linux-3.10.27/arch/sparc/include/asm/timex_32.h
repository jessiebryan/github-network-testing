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
Tue Jul 19 12:52:17 PDT 2016
Fri Jul 22 16:12:33 PDT 2016
Sun, Jul 24, 2016  5:34:45 PM
Tue, Jul 26, 2016 12:28:10 AM
