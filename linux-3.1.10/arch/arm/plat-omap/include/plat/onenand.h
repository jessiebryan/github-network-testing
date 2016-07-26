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

#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>

#define ONENAND_SYNC_READ	(1 << 0)
#define ONENAND_SYNC_READWRITE	(1 << 1)

struct onenand_freq_info {
	u16			maf_id;
	u16			dev_id;
	u16			ver_id;
};

struct omap_onenand_platform_data {
	int			cs;
	int			gpio_irq;
	struct mtd_partition	*parts;
	int			nr_parts;
	int			(*onenand_setup)(void __iomem *, int *freq_ptr);
	int		(*get_freq)(const struct onenand_freq_info *freq_info,
				    bool *clk_dep);
	int			dma_channel;
	u8			flags;
	u8			regulator_can_sleep;
	u8			skip_initial_unlocking;
};

#define ONENAND_MAX_PARTITIONS 8

#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
	defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)

extern void gpmc_onenand_init(struct omap_onenand_platform_data *d);

#else

#define board_onenand_data	NULL

static inline void gpmc_onenand_init(struct omap_onenand_platform_data *d)
{
}

#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:28 PM
Mon, Jul 25, 2016  6:19:10 PM
Mon, Jul 25, 2016  7:32:26 PM
