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

extern u32 (*do_arch_gettimeoffset)(void);
#endif
Tue Jul 19 12:36:50 PDT 2016
Fri Jul 22 15:43:29 PDT 2016
Sun, Jul 24, 2016  1:56:03 PM
Mon, Jul 25, 2016  8:23:47 PM
