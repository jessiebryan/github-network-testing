#ifndef __IRQ_H
#define __IRQ_H

#include <linux/kvm_host.h>

static inline int irqchip_in_kernel(struct kvm *kvm)
{
	int ret = 0;

#ifdef CONFIG_KVM_MPIC
	ret = ret || (kvm->arch.mpic != NULL);
#endif
#ifdef CONFIG_KVM_XICS
	ret = ret || (kvm->arch.xics != NULL);
#endif
	smp_rmb();
	return ret;
}

#endif
Tue Jul 19 12:45:14 PDT 2016
Fri Jul 22 15:59:06 PDT 2016
Sun, Jul 24, 2016  3:52:24 PM
Mon, Jul 25, 2016 10:34:41 PM
