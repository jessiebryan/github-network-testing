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
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:30 PM
Mon, Jul 25, 2016  8:07:47 PM
Tue, Jul 26, 2016  2:41:58 PM
