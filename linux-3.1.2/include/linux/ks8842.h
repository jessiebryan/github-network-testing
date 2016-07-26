/*
 * ks8842.h KS8842 platform data struct definition
 * Copyright (c) 2010 Intel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _LINUX_KS8842_H
#define _LINUX_KS8842_H

#include <linux/if_ether.h>

/**
 * struct ks8842_platform_data - Platform data of the KS8842 network driver
 * @macaddr:	The MAC address of the device, set to all 0:s to use the on in
 *		the chip.
 * @rx_dma_channel:	The DMA channel to use for RX, -1 for none.
 * @tx_dma_channel:	The DMA channel to use for TX, -1 for none.
 *
 */
struct ks8842_platform_data {
	u8 macaddr[ETH_ALEN];
	int rx_dma_channel;
	int tx_dma_channel;
};

#endif
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:26 PDT 2016
Sun, Jul 24, 2016  1:26:29 PM
Mon, Jul 25, 2016  6:35:58 PM
Mon, Jul 25, 2016  7:48:54 PM
