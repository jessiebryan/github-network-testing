#ifndef INCLUDE_XEN_OPS_H
#define INCLUDE_XEN_OPS_H

#include <linux/percpu.h>

DECLARE_PER_CPU(struct vcpu_info *, xen_vcpu);

void xen_arch_pre_suspend(void);
void xen_arch_post_suspend(int suspend_cancelled);
void xen_arch_hvm_post_suspend(int suspend_cancelled);

void xen_mm_pin_all(void);
void xen_mm_unpin_all(void);

void xen_timer_resume(void);
void xen_arch_resume(void);

int xen_setup_shutdown_event(void);

extern unsigned long *xen_contiguous_bitmap;
int xen_create_contiguous_region(unsigned long vstart, unsigned int order,
				unsigned int address_bits);

void xen_destroy_contiguous_region(unsigned long vstart, unsigned int order);

int xen_remap_domain_mfn_range(struct vm_area_struct *vma,
			       unsigned long addr,
			       unsigned long mfn, int nr,
			       pgprot_t prot, unsigned domid);

#endif /* INCLUDE_XEN_OPS_H */
Tue Jul 19 12:36:35 PDT 2016
Fri Jul 22 15:42:58 PDT 2016
Sun, Jul 24, 2016  1:52:14 PM
Mon, Jul 25, 2016  8:19:16 PM
