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
Tue Jul 19 12:53:35 PDT 2016
Fri Jul 22 16:15:03 PDT 2016
Sun, Jul 24, 2016  5:53:19 PM
Tue, Jul 26, 2016 12:48:39 AM
