/*
 * Ethernet driver for the WIZnet W5x00 chip.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef PLATFORM_DATA_WIZNET_H
#define PLATFORM_DATA_WIZNET_H

#include <linux/if_ether.h>

struct wiznet_platform_data {
	int	link_gpio;
	u8	mac_addr[ETH_ALEN];
};

#ifndef CONFIG_WIZNET_BUS_SHIFT
#define CONFIG_WIZNET_BUS_SHIFT 0
#endif

#define W5100_BUS_DIRECT_SIZE	(0x8000 << CONFIG_WIZNET_BUS_SHIFT)
#define W5300_BUS_DIRECT_SIZE	(0x0400 << CONFIG_WIZNET_BUS_SHIFT)

#endif /* PLATFORM_DATA_WIZNET_H */
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:06 PDT 2016
Sun, Jul 24, 2016  5:39:00 PM
Tue, Jul 26, 2016 12:32:50 AM
