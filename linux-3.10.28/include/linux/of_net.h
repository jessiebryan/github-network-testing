/*
 * OF helpers for network devices.
 *
 * This file is released under the GPLv2
 */

#ifndef __LINUX_OF_NET_H
#define __LINUX_OF_NET_H

#ifdef CONFIG_OF_NET
#include <linux/of.h>
extern const int of_get_phy_mode(struct device_node *np);
extern const void *of_get_mac_address(struct device_node *np);
#else
static inline const int of_get_phy_mode(struct device_node *np)
{
	return -ENODEV;
}

static inline const void *of_get_mac_address(struct device_node *np)
{
	return NULL;
}
#endif

#endif /* __LINUX_OF_NET_H */
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:21 PDT 2016
Sun, Jul 24, 2016  5:48:10 PM
Tue, Jul 26, 2016 12:42:55 AM
