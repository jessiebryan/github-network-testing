/*
 * Blackfin On-Chip MAC Driver
 *
 * Copyright 2004-2010 Analog Devices Inc.
 *
 * Enter bugs at http://blackfin.uclinux.org/
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _LINUX_BFIN_MAC_H_
#define _LINUX_BFIN_MAC_H_

#include <linux/phy.h>

struct bfin_phydev_platform_data {
	unsigned short addr;
	int irq;
};

struct bfin_mii_bus_platform_data {
	int phydev_number;
	struct bfin_phydev_platform_data *phydev_data;
	const unsigned short *mac_peripherals;
	int phy_mode;
	unsigned int phy_mask;
	unsigned short vlan1_mask, vlan2_mask;
};

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:09 PM
Mon, Jul 25, 2016  6:35:34 PM
Mon, Jul 25, 2016  7:48:31 PM
Tue, Jul 26, 2016  2:23:53 PM
