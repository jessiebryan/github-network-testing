#ifndef _ASM_ARM_XEN_HYPERVISOR_H
#define _ASM_ARM_XEN_HYPERVISOR_H

extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;

/* Lazy mode for batching updates / context switch */
enum paravirt_lazy_mode {
	PARAVIRT_LAZY_NONE,
	PARAVIRT_LAZY_MMU,
	PARAVIRT_LAZY_CPU,
};

static inline enum paravirt_lazy_mode paravirt_get_lazy_mode(void)
{
	return PARAVIRT_LAZY_NONE;
}

#endif /* _ASM_ARM_XEN_HYPERVISOR_H */
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:15 PDT 2016
Sun, Jul 24, 2016  2:45:15 PM
Mon, Jul 25, 2016  9:19:29 PM
