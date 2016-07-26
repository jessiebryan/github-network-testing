/*
 *  S390 version
 *    Copyright IBM Corp. 1999, 2000
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com),
 *               Denis Joseph Barrow (djbarrow@de.ibm.com,barrow_dj@yahoo.com)
 *
 *  Derived from "include/asm-i386/hardirq.h"
 */

#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

#include <asm/lowcore.h>

#define local_softirq_pending() (S390_lowcore.softirq_pending)

#define __ARCH_IRQ_STAT
#define __ARCH_HAS_DO_SOFTIRQ
#define __ARCH_IRQ_EXIT_IRQS_DISABLED

#define HARDIRQ_BITS	8

#endif /* __ASM_HARDIRQ_H */
Tue Jul 19 12:43:58 PDT 2016
Fri Jul 22 15:56:44 PDT 2016
Sun, Jul 24, 2016  3:34:00 PM
Mon, Jul 25, 2016 10:14:14 PM
