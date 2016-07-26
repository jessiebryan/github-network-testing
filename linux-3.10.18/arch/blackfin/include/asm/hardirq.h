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
Tue Jul 19 12:46:20 PDT 2016
Fri Jul 22 16:01:12 PDT 2016
Sun, Jul 24, 2016  4:09:00 PM
Mon, Jul 25, 2016 10:53:08 PM
