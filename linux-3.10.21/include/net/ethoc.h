/*
 * linux/include/net/ethoc.h
 *
 * Copyright (C) 2008-2009 Avionic Design GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Written by Thierry Reding <thierry.reding@avionic-design.de>
 */

#ifndef LINUX_NET_ETHOC_H
#define LINUX_NET_ETHOC_H 1

struct ethoc_platform_data {
	u8 hwaddr[IFHWADDRLEN];
	s8 phy_id;
};

#endif /* !LINUX_NET_ETHOC_H */

Tue Jul 19 12:48:44 PDT 2016
Fri Jul 22 16:05:43 PDT 2016
Sun, Jul 24, 2016  4:43:40 PM
Mon, Jul 25, 2016 11:31:38 PM
