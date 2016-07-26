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
	return percpu_read(irq_regs);
}

static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
	struct pt_regs *old_regs;

	old_regs = get_irq_regs();
	percpu_write(irq_regs, new_regs);

	return old_regs;
}

#endif /* _ASM_X86_IRQ_REGS_32_H */
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:10 PDT 2016
Sun, Jul 24, 2016  1:31:38 PM
Mon, Jul 25, 2016  7:54:56 PM
Tue, Jul 26, 2016  2:29:58 PM
