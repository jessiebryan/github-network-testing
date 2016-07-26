#ifndef _ASM_ARM_XEN_EVENTS_H
#define _ASM_ARM_XEN_EVENTS_H

#include <asm/ptrace.h>
#include <asm/atomic.h>

enum ipi_vector {
	XEN_PLACEHOLDER_VECTOR,

	/* Xen IPIs go here */
	XEN_NR_IPIS,
};

static inline int xen_irqs_disabled(struct pt_regs *regs)
{
	return raw_irqs_disabled_flags(regs->ARM_cpsr);
}

#define xchg_xen_ulong(ptr, val) atomic64_xchg(container_of((ptr),	\
							    atomic64_t,	\
							    counter), (val))

#endif /* _ASM_ARM_XEN_EVENTS_H */
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:31 PDT 2016
Sun, Jul 24, 2016  2:54:28 PM
Mon, Jul 25, 2016  9:29:54 PM
