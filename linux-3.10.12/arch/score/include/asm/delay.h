#ifndef _ASM_SCORE_DELAY_H
#define _ASM_SCORE_DELAY_H

#include <asm-generic/param.h>

static inline void __delay(unsigned long loops)
{
	/* 3 cycles per loop. */
	__asm__ __volatile__ (
		"1:\tsubi\t%0, 3\n\t"
		"cmpz.c\t%0\n\t"
		"ble\t1b\n\t"
		: "=r" (loops)
		: "0" (loops));
}

static inline void __udelay(unsigned long usecs)
{
	unsigned long loops_per_usec;

	loops_per_usec = (loops_per_jiffy * HZ) / 1000000;

	__delay(usecs * loops_per_usec);
}

#define udelay(usecs) __udelay(usecs)

#endif /* _ASM_SCORE_DELAY_H */
Tue Jul 19 12:42:40 PDT 2016
Fri Jul 22 15:54:23 PDT 2016
Sun, Jul 24, 2016  3:15:39 PM
Mon, Jul 25, 2016  9:53:52 PM
