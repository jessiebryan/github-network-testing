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
Tue Jul 19 12:51:16 PDT 2016
Fri Jul 22 16:10:31 PDT 2016
Sun, Jul 24, 2016  5:19:59 PM
Tue, Jul 26, 2016 12:11:53 AM
