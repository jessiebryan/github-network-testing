/*
 * arch/arm/plat-omap/include/mach/onenand.h
 *
 * Copyright (C) 2006 Nokia Corporation
 * Author: Juha Yrjola
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef	__MTD_ONENAND_OMAP2_H
#define	__MTD_ONENAND_OMAP2_H

#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>

#define ONENAND_SYNC_READ	(1 << 0)
#define ONENAND_SYNC_READWRITE	(1 << 1)
#define	ONENAND_IN_OMAP34XX	(1 << 2)

struct omap_onenand_platform_data {
	int			cs;
	int			gpio_irq;
	struct mtd_partition	*parts;
	int			nr_parts;
	int			(*onenand_setup)(void __iomem *, int *freq_ptr);
	int			dma_channel;
	u8			flags;
	u8			regulator_can_sleep;
	u8			skip_initial_unlocking;

	/* for passing the partitions */
	struct device_node	*of_node;
};
#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:12 PM
Mon, Jul 25, 2016 11:31:08 PM
