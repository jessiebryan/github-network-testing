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
#endif

#endif /* __LINUX_OF_NET_H */
Tue Jul 19 12:37:06 PDT 2016
Fri Jul 22 15:43:58 PDT 2016
Sun, Jul 24, 2016  1:59:44 PM
Mon, Jul 25, 2016  8:28:10 PM
