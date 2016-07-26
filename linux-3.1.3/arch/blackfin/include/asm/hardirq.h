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
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:49 PDT 2016
Sun, Jul 24, 2016  1:29:10 PM
Mon, Jul 25, 2016  6:39:10 PM
Mon, Jul 25, 2016  7:52:02 PM
Tue, Jul 26, 2016  2:27:13 PM
