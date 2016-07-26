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
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:02 PM
Mon, Jul 25, 2016  6:19:51 PM
Mon, Jul 25, 2016  7:33:07 PM
