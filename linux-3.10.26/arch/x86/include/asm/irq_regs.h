/*
 * Per-cpu current frame pointer - the location of the last exception frame on
 * the stack, stored in the per-cpu area.
 *
 * Jeremy Fitzhardinge <jeremy@goop.org>
 */
#ifndef _ASM_X86_IRQ_REGS_H
#define _ASM_X86_IRQ_REGS_H

#include <asm/percpu.h>

#define ARCH_HAS_OWN_IRQ_REGS

DECLARE_PER_CPU(struct pt_regs *, irq_regs);

static inline struct pt_regs *get_irq_regs(void)
{
	return this_cpu_read(irq_regs);
}

static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
	struct pt_regs *old_regs;

	old_regs = get_irq_regs();
	this_cpu_write(irq_regs, new_regs);

	return old_regs;
}

#endif /* _ASM_X86_IRQ_REGS_32_H */
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:18 PDT 2016
Sun, Jul 24, 2016  5:25:46 PM
Tue, Jul 26, 2016 12:18:15 AM
