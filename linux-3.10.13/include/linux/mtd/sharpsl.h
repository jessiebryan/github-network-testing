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
Tue Jul 19 12:43:37 PDT 2016
Fri Jul 22 15:56:07 PDT 2016
Sun, Jul 24, 2016  3:29:12 PM
Mon, Jul 25, 2016 10:08:53 PM
