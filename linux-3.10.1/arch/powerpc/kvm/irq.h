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
Tue Jul 19 12:38:37 PDT 2016
Fri Jul 22 15:46:47 PDT 2016
Sun, Jul 24, 2016  2:20:15 PM
Mon, Jul 25, 2016  8:51:36 PM
