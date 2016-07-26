#ifndef __UM_DELAY_H
#define __UM_DELAY_H

/* Undefined on purpose */
extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long usecs);
extern void __delay(unsigned long loops);

#define udelay(n) ((__builtin_constant_p(n) && (n) > 20000) ? \
	__bad_udelay() : __udelay(n))

#define ndelay(n) ((__builtin_constant_p(n) && (n) > 20000) ? \
	__bad_ndelay() : __ndelay(n))

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:11 PM
Mon, Jul 25, 2016  6:32:00 PM
