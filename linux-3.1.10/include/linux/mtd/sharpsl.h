/*
 * SharpSL NAND support
 *
 * Copyright (C) 2008 Dmitry Baryshkov
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/mtd/nand.h>
#include <linux/mtd/nand_ecc.h>
#include <linux/mtd/partitions.h>

struct sharpsl_nand_platform_data {
	struct nand_bbt_descr	*badblock_pattern;
	struct nand_ecclayout	*ecc_layout;
	struct mtd_partition	*partitions;
	unsigned int		nr_partitions;
};
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:22 PM
Mon, Jul 25, 2016  6:26:14 PM
Mon, Jul 25, 2016  7:39:23 PM
Tue, Jul 26, 2016  2:15:14 PM
