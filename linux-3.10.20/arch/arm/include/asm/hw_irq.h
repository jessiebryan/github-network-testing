/*
 * Nothing to see here yet
 */
#ifndef _ARCH_ARM_HW_IRQ_H
#define _ARCH_ARM_HW_IRQ_H

static inline void ack_bad_irq(int irq)
{
	extern unsigned long irq_err_count;
	irq_err_count++;
}

void set_irq_flags(unsigned int irq, unsigned int flags);

#define IRQF_VALID	(1 << 0)
#define IRQF_PROBE	(1 << 1)
#define IRQF_NOAUTOEN	(1 << 2)

#define ARCH_IRQ_INIT_FLAGS	(IRQ_NOREQUEST | IRQ_NOPROBE)

#endif
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:30 PDT 2016
Sun, Jul 24, 2016  4:26:37 PM
Mon, Jul 25, 2016 11:12:42 PM
