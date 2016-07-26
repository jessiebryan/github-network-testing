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
Tue Jul 19 12:48:26 PDT 2016
Fri Jul 22 16:05:09 PDT 2016
Sun, Jul 24, 2016  4:39:22 PM
Mon, Jul 25, 2016 11:26:52 PM
