#ifndef __H8300_HARDIRQ_H
#define __H8300_HARDIRQ_H

#include <asm/irq.h>

#define HARDIRQ_BITS	8

/*
 * The hardirq mask has to be large enough to have
 * space for potentially all IRQ sources in the system
 * nesting on a single CPU:
 */
#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
#endif

#include <asm-generic/hardirq.h>

#endif
Tue Jul 19 12:50:52 PDT 2016
Fri Jul 22 16:09:44 PDT 2016
Sun, Jul 24, 2016  5:14:12 PM
Tue, Jul 26, 2016 12:05:28 AM
