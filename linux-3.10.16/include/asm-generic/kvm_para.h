#ifndef _ASM_GENERIC_KVM_PARA_H
#define _ASM_GENERIC_KVM_PARA_H

#include <uapi/asm-generic/kvm_para.h>


/*
 * This function is used by architectures that support kvm to avoid issuing
 * false soft lockup messages.
 */
static inline bool kvm_check_and_clear_guest_paused(void)
{
	return false;
}

static inline unsigned int kvm_arch_para_features(void)
{
	return 0;
}

static inline bool kvm_para_available(void)
{
	return false;
}

#endif
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:36 PDT 2016
Sun, Jul 24, 2016  3:56:15 PM
Mon, Jul 25, 2016 10:38:57 PM
