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
Tue Jul 19 12:43:14 PDT 2016
Fri Jul 22 15:55:24 PDT 2016
Sun, Jul 24, 2016  3:23:34 PM
Mon, Jul 25, 2016 10:02:37 PM
