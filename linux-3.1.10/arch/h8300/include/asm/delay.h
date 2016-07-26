#ifndef _H8300_DELAY_H
#define _H8300_DELAY_H

#include <asm/param.h>

/*
 * Copyright (C) 2002 Yoshinori Sato <ysato@sourceforge.jp>
 *
 * Delay routines, using a pre-computed "loops_per_second" value.
 */

static inline void __delay(unsigned long loops)
{
	__asm__ __volatile__ ("1:\n\t"
			      "dec.l #1,%0\n\t"
			      "bne 1b"
			      :"=r" (loops):"0"(loops));
}

/*
 * Use only for very small delays ( < 1 msec).  Should probably use a
 * lookup table, really, as the multiplications take much too long with
 * short delays.  This is a "reasonable" implementation, though (and the
 * first constant multiplications gets optimized away if the delay is
 * a constant)  
 */

extern unsigned long loops_per_jiffy;

static inline void udelay(unsigned long usecs)
{
	usecs *= 4295;		/* 2**32 / 1000000 */
	usecs /= (loops_per_jiffy*HZ);
	if (usecs)
		__delay(usecs);
}

#endif /* _H8300_DELAY_H */
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:02 PM
Mon, Jul 25, 2016  6:19:51 PM
Mon, Jul 25, 2016  7:33:06 PM
Tue, Jul 26, 2016  2:09:16 PM
