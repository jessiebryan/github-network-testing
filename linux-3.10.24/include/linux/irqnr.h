#ifndef _LINUX_IRQNR_H
#define _LINUX_IRQNR_H

#include <uapi/linux/irqnr.h>


#ifndef CONFIG_GENERIC_HARDIRQS
#include <asm/irq.h>

/*
 * Wrappers for non-genirq architectures:
 */
#define nr_irqs			NR_IRQS
#define irq_to_desc(irq)	(&irq_desc[irq])

# define for_each_irq_desc(irq, desc)		\
	for (irq = 0; irq < nr_irqs; irq++)

# define for_each_irq_desc_reverse(irq, desc)                          \
	for (irq = nr_irqs - 1; irq >= 0; irq--)

#else /* CONFIG_GENERIC_HARDIRQS */

extern int nr_irqs;
extern struct irq_desc *irq_to_desc(unsigned int irq);
unsigned int irq_get_next_irq(unsigned int offset);

# define for_each_irq_desc(irq, desc)					\
	for (irq = 0, desc = irq_to_desc(irq); irq < nr_irqs;		\
	     irq++, desc = irq_to_desc(irq))				\
		if (!desc)						\
			;						\
		else


# define for_each_irq_desc_reverse(irq, desc)				\
	for (irq = nr_irqs - 1, desc = irq_to_desc(irq); irq >= 0;	\
	     irq--, desc = irq_to_desc(irq))				\
		if (!desc)						\
			;						\
		else

#ifdef CONFIG_SMP
#define irq_node(irq)	(irq_get_irq_data(irq)->node)
#else
#define irq_node(irq)	0
#endif

# define for_each_active_irq(irq)			\
	for (irq = irq_get_next_irq(0); irq < nr_irqs;	\
	     irq = irq_get_next_irq(irq + 1))

#endif /* CONFIG_GENERIC_HARDIRQS */

#define for_each_irq_nr(irq)                   \
       for (irq = 0; irq < nr_irqs; irq++)

#endif
Tue Jul 19 12:50:37 PDT 2016
Fri Jul 22 16:09:15 PDT 2016
Sun, Jul 24, 2016  5:10:38 PM
Tue, Jul 26, 2016 12:01:33 AM
