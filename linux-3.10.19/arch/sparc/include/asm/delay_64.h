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
Tue Jul 19 12:47:08 PDT 2016
Fri Jul 22 16:02:43 PDT 2016
Sun, Jul 24, 2016  4:20:27 PM
Mon, Jul 25, 2016 11:05:54 PM
