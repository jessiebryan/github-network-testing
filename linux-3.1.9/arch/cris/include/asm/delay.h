#ifndef _CRIS_DELAY_H
#define _CRIS_DELAY_H

/*
 * Copyright (C) 1998-2002 Axis Communications AB
 *
 * Delay routines, using a pre-computed "loops_per_second" value.
 */

#include <arch/delay.h>

/* Use only for very small delays ( < 1 msec).  */

extern unsigned long loops_per_usec; /* arch/cris/mm/init.c */

/* May be defined by arch/delay.h. */
#ifndef udelay
static inline void udelay(unsigned long usecs)
{
	__delay(usecs * loops_per_usec);
}
#endif

#endif /* defined(_CRIS_DELAY_H) */



Tue Jul 19 12:37:56 PDT 2016
Fri Jul 22 15:45:27 PDT 2016
Sun, Jul 24, 2016  2:10:38 PM
