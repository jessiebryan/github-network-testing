/*
 * Network interface table.
 *
 * Network interfaces (devices) do not have a security field, so we
 * maintain a table associating each interface with a SID.
 *
 * Author: James Morris <jmorris@redhat.com>
 *
 * Copyright (C) 2003 Red Hat, Inc., James Morris <jmorris@redhat.com>
 * Copyright (C) 2007 Hewlett-Packard Development Company, L.P.
 *                    Paul Moore <paul@paul-moore.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * as published by the Free Software Foundation.
 */
#ifndef _SELINUX_NETIF_H_
#define _SELINUX_NETIF_H_

int sel_netif_sid(int ifindex, u32 *sid);

#endif	/* _SELINUX_NETIF_H_ */

Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:37 PDT 2016
Sun, Jul 24, 2016  4:35:19 PM
Mon, Jul 25, 2016 11:22:22 PM
