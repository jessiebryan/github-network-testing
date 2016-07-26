#ifndef __ASM_GENERIC_IRQ_H
#define __ASM_GENERIC_IRQ_H

/*
 * NR_IRQS is the upper bound of how many interrupts can be handled
 * in the platform. It is used to size the static irq_map array,
 * so don't make it too big.
 */
#ifndef NR_IRQS
#define NR_IRQS 64
#endif

static inline int irq_canonicalize(int irq)
{
	return irq;
}

#endif /* __ASM_GENERIC_IRQ_H */
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:45 PM
Mon, Jul 25, 2016  6:25:29 PM
Mon, Jul 25, 2016  7:38:39 PM
Tue, Jul 26, 2016  2:14:32 PM
