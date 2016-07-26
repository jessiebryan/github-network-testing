/* linux/arch/arm/plat-samsung/include/plat/s3c-pl330-pdata.h
 *
 * Copyright (C) 2010 Samsung Electronics Co. Ltd.
 *	Jaswinder Singh <jassi.brar@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __S3C_PL330_PDATA_H
#define __S3C_PL330_PDATA_H

#include <plat/s3c-dma-pl330.h>

/*
 * Every PL330 DMAC has max 32 peripheral interfaces,
 * of which some may be not be really used in your
 * DMAC's configuration.
 * Populate this array of 32 peri i/fs with relevant
 * channel IDs for used peri i/f and DMACH_MAX for
 * those unused.
 *
 * The platforms just need to provide this info
 * to the S3C DMA API driver for PL330.
 */
struct s3c_pl330_platdata {
	enum dma_ch peri[32];
};

#endif /* __S3C_PL330_PDATA_H */
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:32 PM
Mon, Jul 25, 2016  6:19:15 PM
