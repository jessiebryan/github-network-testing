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
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:58 PDT 2016
Sun, Jul 24, 2016  1:15:15 PM
Mon, Jul 25, 2016  6:22:29 PM
Mon, Jul 25, 2016  7:35:43 PM
Tue, Jul 26, 2016  2:11:42 PM
