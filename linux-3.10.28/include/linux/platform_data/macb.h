/*
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __MACB_PDATA_H__
#define __MACB_PDATA_H__

struct macb_platform_data {
	u32		phy_mask;
	int		phy_irq_pin;	/* PHY IRQ */
	u8		is_rmii;	/* using RMII interface? */
	u8		rev_eth_addr;	/* reverse Ethernet address byte order */
};

#endif /* __MACB_PDATA_H__ */
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:22 PDT 2016
Sun, Jul 24, 2016  5:48:16 PM
Tue, Jul 26, 2016 12:43:02 AM
