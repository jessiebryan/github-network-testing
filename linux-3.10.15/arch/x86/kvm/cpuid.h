#ifndef ARCH_X86_KVM_CPUID_H
#define ARCH_X86_KVM_CPUID_H

#include "x86.h"

void kvm_update_cpuid(struct kvm_vcpu *vcpu);
struct kvm_cpuid_entry2 *kvm_find_cpuid_entry(struct kvm_vcpu *vcpu,
					      u32 function, u32 index);
int kvm_dev_ioctl_get_supported_cpuid(struct kvm_cpuid2 *cpuid,
				      struct kvm_cpuid_entry2 __user *entries);
int kvm_vcpu_ioctl_set_cpuid(struct kvm_vcpu *vcpu,
			     struct kvm_cpuid *cpuid,
			     struct kvm_cpuid_entry __user *entries);
int kvm_vcpu_ioctl_set_cpuid2(struct kvm_vcpu *vcpu,
			      struct kvm_cpuid2 *cpuid,
			      struct kvm_cpuid_entry2 __user *entries);
int kvm_vcpu_ioctl_get_cpuid2(struct kvm_vcpu *vcpu,
			      struct kvm_cpuid2 *cpuid,
			      struct kvm_cpuid_entry2 __user *entries);
void kvm_cpuid(struct kvm_vcpu *vcpu, u32 *eax, u32 *ebx, u32 *ecx, u32 *edx);


static inline bool guest_cpuid_has_xsave(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	if (!static_cpu_has(X86_FEATURE_XSAVE))
		return 0;

	best = kvm_find_cpuid_entry(vcpu, 1, 0);
	return best && (best->ecx & bit(X86_FEATURE_XSAVE));
}

static inline bool guest_cpuid_has_tsc_adjust(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	best = kvm_find_cpuid_entry(vcpu, 7, 0);
	return best && (best->ebx & bit(X86_FEATURE_TSC_ADJUST));
}

static inline bool guest_cpuid_has_smep(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	best = kvm_find_cpuid_entry(vcpu, 7, 0);
	return best && (best->ebx & bit(X86_FEATURE_SMEP));
}

static inline bool guest_cpuid_has_fsgsbase(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	best = kvm_find_cpuid_entry(vcpu, 7, 0);
	return best && (best->ebx & bit(X86_FEATURE_FSGSBASE));
}

static inline bool guest_cpuid_has_osvw(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	best = kvm_find_cpuid_entry(vcpu, 0x80000001, 0);
	return best && (best->ecx & bit(X86_FEATURE_OSVW));
}

static inline bool guest_cpuid_has_pcid(struct kvm_vcpu *vcpu)
{
	struct kvm_cpuid_entry2 *best;

	best = kvm_find_cpuid_entry(vcpu, 1, 0);
	return best && (best->ecx & bit(X86_FEATURE_PCID));
}

#endif
Tue Jul 19 12:44:40 PDT 2016
Fri Jul 22 15:58:03 PDT 2016
Sun, Jul 24, 2016  3:44:10 PM
Mon, Jul 25, 2016 10:25:31 PM
