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
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:59 PDT 2016
Sun, Jul 24, 2016  5:16:02 PM
Tue, Jul 26, 2016 12:07:33 AM
