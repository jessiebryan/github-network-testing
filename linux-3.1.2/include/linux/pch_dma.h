/*
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

#ifndef PCH_DMA_H
#define PCH_DMA_H

#include <linux/dmaengine.h>

enum pch_dma_width {
	PCH_DMA_WIDTH_1_BYTE,
	PCH_DMA_WIDTH_2_BYTES,
	PCH_DMA_WIDTH_4_BYTES,
};

struct pch_dma_slave {
	struct device		*dma_dev;
	unsigned int		chan_id;
	dma_addr_t		tx_reg;
	dma_addr_t		rx_reg;
	enum pch_dma_width	width;
};

#endif
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:29 PDT 2016
Sun, Jul 24, 2016  1:26:46 PM
Mon, Jul 25, 2016  6:36:19 PM
Mon, Jul 25, 2016  7:49:14 PM
Tue, Jul 26, 2016  2:24:34 PM
