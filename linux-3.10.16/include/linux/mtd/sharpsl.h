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
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:41 PDT 2016
Sun, Jul 24, 2016  3:56:54 PM
