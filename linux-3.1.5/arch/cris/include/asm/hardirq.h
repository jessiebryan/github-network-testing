#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

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

#endif /* __ASM_HARDIRQ_H */
Tue Jul 19 12:36:08 PDT 2016
Fri Jul 22 15:42:06 PDT 2016
Sun, Jul 24, 2016  1:45:54 PM
Mon, Jul 25, 2016  8:11:49 PM
Tue, Jul 26, 2016  2:45:44 PM
