/*
 *  S390 version
 *    Copyright IBM Corp. 1999
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 *
 *  Derived from "include/asm-i386/delay.h"
 *    Copyright (C) 1993 Linus Torvalds
 *
 *  Delay routines calling functions in arch/s390/lib/delay.c
 */
 
#ifndef _S390_DELAY_H
#define _S390_DELAY_H

void __ndelay(unsigned long long nsecs);
void __udelay(unsigned long long usecs);
void udelay_simple(unsigned long long usecs);
void __delay(unsigned long loops);

#define ndelay(n) __ndelay((unsigned long long) (n))
#define udelay(n) __udelay((unsigned long long) (n))
#define mdelay(n) __udelay((unsigned long long) (n) * 1000)

#endif /* defined(_S390_DELAY_H) */
Tue Jul 19 12:52:15 PDT 2016
Fri Jul 22 16:12:29 PDT 2016
Sun, Jul 24, 2016  5:34:19 PM
Tue, Jul 26, 2016 12:27:41 AM
