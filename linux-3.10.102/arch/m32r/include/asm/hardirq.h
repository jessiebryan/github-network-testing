#ifdef __KERNEL__
#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

#include <asm/irq.h>

#if NR_IRQS > 256
#define HARDIRQ_BITS	9
#else
#define HARDIRQ_BITS	8
#endif

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
#endif /* __KERNEL__ */
Tue Jul 19 12:41:07 PDT 2016
Fri Jul 22 15:51:44 PDT 2016
Sun, Jul 24, 2016  2:55:55 PM
Mon, Jul 25, 2016  9:31:34 PM
