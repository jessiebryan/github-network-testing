/*
 * Network port table
 *
 * SELinux must keep a mapping of network ports to labels/SIDs.  This
 * mapping is maintained as part of the normal policy but a fast cache is
 * needed to reduce the lookup overhead.
 *
 * Author: Paul Moore <paul@paul-moore.com>
 *
 */

/*
 * (c) Copyright Hewlett-Packard Development Company, L.P., 2008
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _SELINUX_NETPORT_H
#define _SELINUX_NETPORT_H

int sel_netport_sid(u8 protocol, u16 pnum, u32 *sid);

#endif
Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:37 PDT 2016
Sun, Jul 24, 2016  4:35:19 PM
Mon, Jul 25, 2016 11:22:22 PM
