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
Tue Jul 19 12:44:29 PDT 2016
Fri Jul 22 15:57:44 PDT 2016
Sun, Jul 24, 2016  3:41:38 PM
Mon, Jul 25, 2016 10:22:41 PM
