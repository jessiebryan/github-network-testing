#ifndef _METAG_DELAY_H
#define _METAG_DELAY_H

/*
 * Copyright (C) 1993 Linus Torvalds
 *
 * Delay routines calling functions in arch/metag/lib/delay.c
 */

/* Undefined functions to get compile-time errors */
extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __const_udelay(unsigned long xloops);
extern void __delay(unsigned long loops);

/* 0x10c7 is 2**32 / 1000000 (rounded up) */
#define udelay(n) (__builtin_constant_p(n) ? \
	((n) > 20000 ? __bad_udelay() : __const_udelay((n) * 0x10c7ul)) : \
	__udelay(n))

/* 0x5 is 2**32 / 1000000000 (rounded up) */
#define ndelay(n) (__builtin_constant_p(n) ? \
	((n) > 20000 ? __bad_ndelay() : __const_udelay((n) * 5ul)) : \
	__ndelay(n))

#endif /* _METAG_DELAY_H */
Tue Jul 19 12:39:50 PDT 2016
Fri Jul 22 15:49:13 PDT 2016
Sun, Jul 24, 2016  2:37:41 PM
