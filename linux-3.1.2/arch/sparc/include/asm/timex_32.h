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
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:59 PDT 2016
Sun, Jul 24, 2016  1:23:04 PM
Mon, Jul 25, 2016  6:31:52 PM
Mon, Jul 25, 2016  7:44:54 PM
Tue, Jul 26, 2016  2:20:30 PM
