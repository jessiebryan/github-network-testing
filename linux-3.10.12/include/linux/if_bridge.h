/*
 *	Linux ethernet bridge
 *
 *	Authors:
 *	Lennert Buytenhek		<buytenh@gnu.org>
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 */
#ifndef _LINUX_IF_BRIDGE_H
#define _LINUX_IF_BRIDGE_H


#include <linux/netdevice.h>
#include <uapi/linux/if_bridge.h>

extern void brioctl_set(int (*ioctl_hook)(struct net *, unsigned int, void __user *));

typedef int br_should_route_hook_t(struct sk_buff *skb);
extern br_should_route_hook_t __rcu *br_should_route_hook;

#endif
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:54 PDT 2016
Sun, Jul 24, 2016  3:19:42 PM
Mon, Jul 25, 2016  9:58:20 PM
