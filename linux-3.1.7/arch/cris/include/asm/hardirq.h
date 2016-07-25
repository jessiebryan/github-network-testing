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
Tue Jul 19 12:36:43 PDT 2016
Fri Jul 22 15:43:14 PDT 2016
Sun, Jul 24, 2016  1:54:10 PM
