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
Tue Jul 19 12:49:28 PDT 2016
Fri Jul 22 16:07:04 PDT 2016
Sun, Jul 24, 2016  4:53:58 PM
