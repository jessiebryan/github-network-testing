/*
 * kvm asynchronous fault support
 *
 * Copyright 2010 Red Hat, Inc.
 *
 * Author:
 *      Gleb Natapov <gleb@redhat.com>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __KVM_ASYNC_PF_H__
#define __KVM_ASYNC_PF_H__

#ifdef CONFIG_KVM_ASYNC_PF
int kvm_async_pf_init(void);
void kvm_async_pf_deinit(void);
void kvm_async_pf_vcpu_init(struct kvm_vcpu *vcpu);
#else
#define kvm_async_pf_init() (0)
#define kvm_async_pf_deinit() do{}while(0)
#define kvm_async_pf_vcpu_init(C) do{}while(0)
#endif

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:38 PDT 2016
Sun, Jul 24, 2016  1:27:55 PM
Mon, Jul 25, 2016  6:37:42 PM
Mon, Jul 25, 2016  7:50:35 PM
Tue, Jul 26, 2016  2:25:51 PM
