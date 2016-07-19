#ifndef __ALPHA_DELAY_H
#define __ALPHA_DELAY_H

extern void __delay(int loops);
extern void udelay(unsigned long usecs);

extern void ndelay(unsigned long nsecs);
#define ndelay ndelay

#endif /* defined(__ALPHA_DELAY_H) */
Tue Jul 19 12:51:25 PDT 2016
