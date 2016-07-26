#ifndef _ASM_X86_XEN_EVENTS_H
#define _ASM_X86_XEN_EVENTS_H

enum ipi_vector {
	XEN_RESCHEDULE_VECTOR,
	XEN_CALL_FUNCTION_VECTOR,
	XEN_CALL_FUNCTION_SINGLE_VECTOR,
	XEN_SPIN_UNLOCK_VECTOR,

	XEN_NR_IPIS,
};

static inline int xen_irqs_disabled(struct pt_regs *regs)
{
	return raw_irqs_disabled_flags(regs->flags);
}

#endif /* _ASM_X86_XEN_EVENTS_H */
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:11 PDT 2016
Sun, Jul 24, 2016  1:31:45 PM
Mon, Jul 25, 2016  7:55:05 PM
Tue, Jul 26, 2016  2:30:06 PM
