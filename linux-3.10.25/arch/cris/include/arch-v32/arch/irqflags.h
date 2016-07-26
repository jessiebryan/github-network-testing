#ifndef __ASM_CRIS_ARCH_IRQFLAGS_H
#define __ASM_CRIS_ARCH_IRQFLAGS_H

#include <linux/types.h>
#include <arch/ptrace.h>

static inline unsigned long arch_local_save_flags(void)
{
	unsigned long flags;
	asm volatile("move $ccs,%0" : "=rm" (flags) : : "memory");
	return flags;
}

static inline void arch_local_irq_disable(void)
{
	asm volatile("di" : : : "memory");
}

static inline void arch_local_irq_enable(void)
{
	asm volatile("ei" : : : "memory");
}

static inline unsigned long arch_local_irq_save(void)
{
	unsigned long flags = arch_local_save_flags();
	arch_local_irq_disable();
	return flags;
}

static inline void arch_local_irq_restore(unsigned long flags)
{
	asm volatile("move %0,$ccs" : : "rm" (flags) : "memory");
}

static inline bool arch_irqs_disabled_flags(unsigned long flags)
{
	return !(flags & (1 << I_CCS_BITNR));
}

static inline bool arch_irqs_disabled(void)
{
	return arch_irqs_disabled_flags(arch_local_save_flags());
}

#endif /* __ASM_CRIS_ARCH_IRQFLAGS_H */
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:42 PDT 2016
Sun, Jul 24, 2016  5:14:00 PM
Tue, Jul 26, 2016 12:05:14 AM
