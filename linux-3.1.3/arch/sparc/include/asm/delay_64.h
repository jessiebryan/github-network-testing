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
Tue Jul 19 12:35:03 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:12 PM
Mon, Jul 25, 2016  7:54:26 PM
