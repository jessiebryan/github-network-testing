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
Tue Jul 19 12:44:53 PDT 2016
Fri Jul 22 15:58:25 PDT 2016
Sun, Jul 24, 2016  3:47:01 PM
Mon, Jul 25, 2016 10:28:41 PM
