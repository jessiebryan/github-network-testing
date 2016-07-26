/* include/linux/fec.h
 *
 * Copyright (c) 2009 Orex Computed Radiography
 *   Baruch Siach <baruch@tkos.co.il>
 *
 * Copyright (C) 2010 Freescale Semiconductor, Inc.
 *
 * Header file for the FEC platform data
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __LINUX_FEC_H__
#define __LINUX_FEC_H__

#include <linux/phy.h>

struct fec_platform_data {
	phy_interface_t phy;
	unsigned char mac[ETH_ALEN];
};

#endif
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:18 PDT 2016
Sun, Jul 24, 2016  5:47:44 PM
Tue, Jul 26, 2016 12:42:27 AM
