/*
 * IXP2000 MSF network device driver
 * Copyright (C) 2004, 2005 Lennert Buytenhek <buytenh@wantstofly.org>
 * Dedicated to Marija Kulikova.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __IXPDEV_H
#define __IXPDEV_H

struct ixpdev_priv
{
	struct net_device *dev;
	struct napi_struct napi;
	int	channel;
	int	tx_queue_entries;
};

struct net_device *ixpdev_alloc(int channel, int sizeof_priv);
int ixpdev_init(int num_ports, struct net_device **nds,
		void (*set_port_admin_status)(int port, int up));
void ixpdev_deinit(void);


#endif
Tue Jul 19 12:36:22 PDT 2016
Fri Jul 22 15:42:32 PDT 2016
Sun, Jul 24, 2016  1:49:09 PM
Mon, Jul 25, 2016  8:15:40 PM
