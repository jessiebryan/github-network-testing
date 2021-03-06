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

#ifndef _VMCI_ROUTE_H_
#define _VMCI_ROUTE_H_

#include <linux/vmw_vmci_defs.h>

enum vmci_route {
	VMCI_ROUTE_NONE,
	VMCI_ROUTE_AS_HOST,
	VMCI_ROUTE_AS_GUEST,
};

int vmci_route(struct vmci_handle *src, const struct vmci_handle *dst,
	       bool from_guest, enum vmci_route *route);

#endif /* _VMCI_ROUTE_H_ */
Tue Jul 19 12:42:49 PDT 2016
Fri Jul 22 15:54:37 PDT 2016
Sun, Jul 24, 2016  3:17:30 PM
Mon, Jul 25, 2016  9:55:54 PM
