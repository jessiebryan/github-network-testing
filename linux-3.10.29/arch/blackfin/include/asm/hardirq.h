/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __BFIN_HARDIRQ_H
#define __BFIN_HARDIRQ_H

#define __ARCH_IRQ_EXIT_IRQS_DISABLED	1

extern void ack_bad_irq(unsigned int irq);
#define ack_bad_irq ack_bad_irq

/* Define until common code gets sane defaults */
#define HARDIRQ_BITS 9

#include <asm-generic/hardirq.h>

#endif
Tue Jul 19 12:53:25 PDT 2016
Fri Jul 22 16:14:44 PDT 2016
Sun, Jul 24, 2016  5:51:01 PM
Tue, Jul 26, 2016 12:46:06 AM
