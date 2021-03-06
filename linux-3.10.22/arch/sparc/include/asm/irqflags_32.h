/*
 * include/asm/irqflags.h
 *
 * IRQ flags handling
 *
 * This file gets included from lowlevel asm headers too, to provide
 * wrapped versions of the local_irq_*() APIs, based on the
 * arch_local_irq_*() functions from the lowlevel headers.
 */
#ifndef _ASM_IRQFLAGS_H
#define _ASM_IRQFLAGS_H

#ifndef __ASSEMBLY__

#include <linux/types.h>
#include <asm/psr.h>

extern void arch_local_irq_restore(unsigned long);
extern unsigned long arch_local_irq_save(void);
extern void arch_local_irq_enable(void);

static inline notrace unsigned long arch_local_save_flags(void)
{
	unsigned long flags;

	asm volatile("rd        %%psr, %0" : "=r" (flags));
	return flags;
}

static inline notrace void arch_local_irq_disable(void)
{
	arch_local_irq_save();
}

static inline notrace bool arch_irqs_disabled_flags(unsigned long flags)
{
	return (flags & PSR_PIL) != 0;
}

static inline notrace bool arch_irqs_disabled(void)
{
	return arch_irqs_disabled_flags(arch_local_save_flags());
}

#endif /* (__ASSEMBLY__) */

#endif /* !(_ASM_IRQFLAGS_H) */
Tue Jul 19 12:49:03 PDT 2016
Fri Jul 22 16:06:19 PDT 2016
Sun, Jul 24, 2016  4:48:12 PM
Mon, Jul 25, 2016 11:36:44 PM
