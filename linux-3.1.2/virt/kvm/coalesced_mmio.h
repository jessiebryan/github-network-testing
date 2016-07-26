#ifndef __KVM_COALESCED_MMIO_H__
#define __KVM_COALESCED_MMIO_H__

/*
 * KVM coalesced MMIO
 *
 * Copyright (c) 2008 Bull S.A.S.
 *
 *  Author: Laurent Vivier <Laurent.Vivier@bull.net>
 *
 */

#ifdef CONFIG_KVM_MMIO

#define KVM_COALESCED_MMIO_ZONE_MAX 100

struct kvm_coalesced_mmio_dev {
	struct kvm_io_device dev;
	struct kvm *kvm;
	spinlock_t lock;
	int nb_zones;
	struct kvm_coalesced_mmio_zone zone[KVM_COALESCED_MMIO_ZONE_MAX];
};

int kvm_coalesced_mmio_init(struct kvm *kvm);
void kvm_coalesced_mmio_free(struct kvm *kvm);
int kvm_vm_ioctl_register_coalesced_mmio(struct kvm *kvm,
                                       struct kvm_coalesced_mmio_zone *zone);
int kvm_vm_ioctl_unregister_coalesced_mmio(struct kvm *kvm,
                                         struct kvm_coalesced_mmio_zone *zone);

#else

static inline int kvm_coalesced_mmio_init(struct kvm *kvm) { return 0; }
static inline void kvm_coalesced_mmio_free(struct kvm *kvm) { }

#endif

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:38 PDT 2016
Sun, Jul 24, 2016  1:27:55 PM
Mon, Jul 25, 2016  6:37:42 PM
Mon, Jul 25, 2016  7:50:36 PM
Tue, Jul 26, 2016  2:25:51 PM
