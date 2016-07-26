/*
 * VMware VMCI Driver
 *
 * Copyright (C) 2012 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef _VMCI_RESOURCE_H_
#define _VMCI_RESOURCE_H_

#include <linux/vmw_vmci_defs.h>
#include <linux/types.h>

#include "vmci_context.h"


enum vmci_resource_type {
	VMCI_RESOURCE_TYPE_ANY,
	VMCI_RESOURCE_TYPE_API,
	VMCI_RESOURCE_TYPE_GROUP,
	VMCI_RESOURCE_TYPE_DATAGRAM,
	VMCI_RESOURCE_TYPE_DOORBELL,
	VMCI_RESOURCE_TYPE_QPAIR_GUEST,
	VMCI_RESOURCE_TYPE_QPAIR_HOST
};

struct vmci_resource {
	struct vmci_handle handle;
	enum vmci_resource_type type;
	struct hlist_node node;
	struct kref kref;
	struct completion done;
};


int vmci_resource_add(struct vmci_resource *resource,
		      enum vmci_resource_type resource_type,
		      struct vmci_handle handle);

void vmci_resource_remove(struct vmci_resource *resource);

struct vmci_resource *
vmci_resource_by_handle(struct vmci_handle resource_handle,
			enum vmci_resource_type resource_type);

struct vmci_resource *vmci_resource_get(struct vmci_resource *resource);
int vmci_resource_put(struct vmci_resource *resource);

struct vmci_handle vmci_resource_handle(struct vmci_resource *resource);

#endif /* _VMCI_RESOURCE_H_ */
Tue Jul 19 12:53:03 PDT 2016
Fri Jul 22 16:14:01 PDT 2016
Sun, Jul 24, 2016  5:45:36 PM
Tue, Jul 26, 2016 12:40:06 AM
