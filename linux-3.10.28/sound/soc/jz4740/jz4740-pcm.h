/*
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _JZ4740_PCM_H
#define _JZ4740_PCM_H

#include <linux/dma-mapping.h>
#include <asm/mach-jz4740/dma.h>


struct jz4740_pcm_config {
	struct jz4740_dma_config dma_config;
	phys_addr_t fifo_addr;
};

#endif
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:51 PM
Tue, Jul 26, 2016 12:44:46 AM
