/*
 * timer.h:  Definitions for the timer chips on the Sparc.
 *
 * Copyright (C) 1995 David S. Miller (davem@caip.rutgers.edu)
 */


#ifndef _SPARC_TIMER_H
#define _SPARC_TIMER_H

#include <asm/system.h>  /* For SUN4M_NCPUS */
#include <asm/btfixup.h>

extern __volatile__ unsigned int *master_l10_counter;

/* FIXME: Make do_[gs]ettimeofday btfixup calls */
BTFIXUPDEF_CALL(int, bus_do_settimeofday, struct timespec *tv)
#define bus_do_settimeofday(tv) BTFIXUP_CALL(bus_do_settimeofday)(tv)

#endif /* !(_SPARC_TIMER_H) */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:59 PDT 2016
Sun, Jul 24, 2016  1:23:04 PM
Mon, Jul 25, 2016  6:31:51 PM
Mon, Jul 25, 2016  7:44:54 PM
Tue, Jul 26, 2016  2:20:29 PM
