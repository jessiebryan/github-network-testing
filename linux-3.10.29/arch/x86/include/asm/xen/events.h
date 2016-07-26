#ifndef _ASM_X86_XEN_EVENTS_H
#define _ASM_X86_XEN_EVENTS_H

enum ipi_vector {
	XEN_RESCHEDULE_VECTOR,
	XEN_CALL_FUNCTION_VECTOR,
	XEN_CALL_FUNCTION_SINGLE_VECTOR,
	XEN_SPIN_UNLOCK_VECTOR,
	XEN_IRQ_WORK_VECTOR,

	XEN_NR_IPIS,
};

static inline int xen_irqs_disabled(struct pt_regs *regs)
{
	return raw_irqs_disabled_flags(regs->flags);
}

/* No need for a barrier -- XCHG is a barrier on x86. */
#define xchg_xen_ulong(ptr, val) xchg((ptr), (val))

#endif /* _ASM_X86_XEN_EVENTS_H */
Tue Jul 19 12:53:37 PDT 2016
Fri Jul 22 16:15:07 PDT 2016
Sun, Jul 24, 2016  5:53:50 PM
Tue, Jul 26, 2016 12:49:13 AM
