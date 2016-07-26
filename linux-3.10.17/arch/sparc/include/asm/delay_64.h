/* delay.h: Linux delay routines on sparc64.
 *
 * Copyright (C) 1996, 2004, 2007 David S. Miller (davem@davemloft.net).
 */

#ifndef _SPARC64_DELAY_H
#define _SPARC64_DELAY_H

#ifndef __ASSEMBLY__

extern void __delay(unsigned long loops);
extern void udelay(unsigned long usecs);
#define mdelay(n)	udelay((n) * 1000)

#endif /* !__ASSEMBLY__ */

#endif /* _SPARC64_DELAY_H */
Tue Jul 19 12:45:52 PDT 2016
Fri Jul 22 16:00:20 PDT 2016
Sun, Jul 24, 2016  4:02:01 PM
Mon, Jul 25, 2016 10:45:24 PM
