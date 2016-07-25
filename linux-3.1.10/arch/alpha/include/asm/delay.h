#ifndef __ALPHA_DELAY_H
#define __ALPHA_DELAY_H

extern void __delay(int loops);
extern void udelay(unsigned long usecs);

extern void ndelay(unsigned long nsecs);
#define ndelay ndelay

#endif /* defined(__ALPHA_DELAY_H) */
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:28 PDT 2016
Sun, Jul 24, 2016  1:11:26 PM
