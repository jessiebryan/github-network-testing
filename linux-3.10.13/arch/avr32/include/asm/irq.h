#ifndef __ASM_AVR32_IRQ_H
#define __ASM_AVR32_IRQ_H

#define NR_INTERNAL_IRQS	64

#include <mach/irq.h>

#ifndef NR_IRQS
#define NR_IRQS			(NR_INTERNAL_IRQS)
#endif

#define irq_canonicalize(i)	(i)

#ifndef __ASSEMBLER__
int nmi_enable(void);
void nmi_disable(void);

/*
 * Returns a bitmask of pending interrupts in a group.
 */
extern unsigned long intc_get_pending(unsigned int group);
#endif

#endif /* __ASM_AVR32_IOCTLS_H */
Tue Jul 19 12:43:10 PDT 2016
Fri Jul 22 15:55:17 PDT 2016
Sun, Jul 24, 2016  3:22:48 PM
