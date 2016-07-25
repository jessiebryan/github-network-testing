#ifndef __ALPHA_DELAY_H
#define __ALPHA_DELAY_H

extern void __delay(int loops);
extern void udelay(unsigned long usecs);

extern void ndelay(unsigned long nsecs);
#define ndelay ndelay

#endif /* defined(__ALPHA_DELAY_H) */
Tue Jul 19 12:41:40 PDT 2016
Fri Jul 22 15:52:48 PDT 2016
Sun, Jul 24, 2016  3:03:27 PM
