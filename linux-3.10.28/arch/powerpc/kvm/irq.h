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
Tue Jul 19 12:52:54 PDT 2016
Fri Jul 22 16:13:45 PDT 2016
Sun, Jul 24, 2016  5:43:32 PM
Tue, Jul 26, 2016 12:37:52 AM
