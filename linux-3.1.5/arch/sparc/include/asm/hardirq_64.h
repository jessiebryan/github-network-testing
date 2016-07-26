/* hardirq.h: 64-bit Sparc hard IRQ support.
 *
 * Copyright (C) 1997, 1998, 2005 David S. Miller (davem@davemloft.net)
 */

#ifndef __SPARC64_HARDIRQ_H
#define __SPARC64_HARDIRQ_H

#include <asm/cpudata.h>

#define __ARCH_IRQ_STAT
#define local_softirq_pending() \
	(local_cpu_data().__softirq_pending)

void ack_bad_irq(unsigned int irq);

#define HARDIRQ_BITS	8

#endif /* !(__SPARC64_HARDIRQ_H) */
Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:21 PDT 2016
Sun, Jul 24, 2016  1:47:43 PM
Mon, Jul 25, 2016  8:13:58 PM
