#ifndef __LINUX_KVM_PARA_H
#define __LINUX_KVM_PARA_H

#include <uapi/linux/kvm_para.h>


static inline int kvm_para_has_feature(unsigned int feature)
{
	if (kvm_arch_para_features() & (1UL << feature))
		return 1;
	return 0;
}
#endif /* __LINUX_KVM_PARA_H */
Tue Jul 19 12:48:40 PDT 2016
Fri Jul 22 16:05:37 PDT 2016
Sun, Jul 24, 2016  4:42:51 PM
Mon, Jul 25, 2016 11:30:45 PM
