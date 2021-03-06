/*
 *   fs/cifs/dns_resolve.h -- DNS Resolver upcall management for CIFS DFS
 *                            Handles host name to IP address resolution
 *
 *   Copyright (c) International Business Machines  Corp., 2008
 *   Author(s): Steve French (sfrench@us.ibm.com)
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation; either version 2.1 of the License, or
 *   (at your option) any later version.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with this library; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _DNS_RESOLVE_H
#define _DNS_RESOLVE_H

#ifdef __KERNEL__
extern int dns_resolve_server_name_to_ip(const char *unc, char **ip_addr);
#endif /* KERNEL */

#endif /* _DNS_RESOLVE_H */
Tue Jul 19 12:34:22 PDT 2016
Fri Jul 22 15:39:21 PDT 2016
Sun, Jul 24, 2016  1:25:44 PM
Mon, Jul 25, 2016  6:35:04 PM
Mon, Jul 25, 2016  7:48:01 PM
Tue, Jul 26, 2016  2:23:25 PM
