/*
 * Copyright (C) 2008-2013 Freescale Semiconductor, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as
 * published by the Free Software Foundation.
 */

#ifndef KVM_E500_MMU_HOST_H
#define KVM_E500_MMU_HOST_H

void inval_gtlbe_on_host(struct kvmppc_vcpu_e500 *vcpu_e500, int tlbsel,
			 int esel);

int e500_mmu_host_init(struct kvmppc_vcpu_e500 *vcpu_e500);
void e500_mmu_host_uninit(struct kvmppc_vcpu_e500 *vcpu_e500);

#endif /* KVM_E500_MMU_HOST_H */
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:39 PM
Mon, Jul 25, 2016  9:12:06 PM
