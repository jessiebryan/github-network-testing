/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LANTIQ_PLATFORM_H__
#define _LANTIQ_PLATFORM_H__

#include <linux/socket.h>

/* struct used to pass info to network drivers */
struct ltq_eth_data {
	struct sockaddr mac;
	int mii_mode;
};

#endif
Tue Jul 19 12:43:55 PDT 2016
Fri Jul 22 15:56:38 PDT 2016
Sun, Jul 24, 2016  3:33:14 PM
Mon, Jul 25, 2016 10:13:24 PM
