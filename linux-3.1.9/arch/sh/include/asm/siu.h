/*
 * platform header for the SIU ASoC driver
 *
 * Copyright (C) 2009-2010 Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef ASM_SIU_H
#define ASM_SIU_H

struct device;

struct siu_platform {
	struct device *dma_dev;
	unsigned int dma_slave_tx_a;
	unsigned int dma_slave_rx_a;
	unsigned int dma_slave_tx_b;
	unsigned int dma_slave_rx_b;
};

#endif /* ASM_SIU_H */
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:40 PDT 2016
Sun, Jul 24, 2016  2:12:18 PM
Mon, Jul 25, 2016  8:42:47 PM
