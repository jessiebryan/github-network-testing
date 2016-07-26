#ifndef __ASM_CRIS_ARCH_IRQFLAGS_H
#define __ASM_CRIS_ARCH_IRQFLAGS_H

#include <linux/types.h>

static inline unsigned long arch_local_save_flags(void)
{
	unsigned long flags;
	asm volatile("move $ccr,%0" : "=rm" (flags) : : "memory");
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
	asm volatile("move %0,$ccr" : : "rm" (flags) : "memory");
}

static inline bool arch_irqs_disabled_flags(unsigned long flags)
{
	return !(flags & (1 << 5));
}

static inline bool arch_irqs_disabled(void)
{
	return arch_irqs_disabled_flags(arch_local_save_flags());
}

#endif /* __ASM_CRIS_ARCH_IRQFLAGS_H */
Tue Jul 19 12:36:08 PDT 2016
Fri Jul 22 15:42:05 PDT 2016
Sun, Jul 24, 2016  1:45:46 PM
Mon, Jul 25, 2016  8:11:40 PM
Tue, Jul 26, 2016  2:45:35 PM
