/*
 *  board-sdp.h
 *
 *  Information structures for SDP-specific board config data
 *
 *  Copyright (C) 2009 Nokia Corporation
 *  Copyright (C) 2009 Texas Instruments
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>
#include <plat/gpmc.h>

#define PDC_NOR		1
#define PDC_NAND	2
#define PDC_ONENAND	3
#define DBG_MPDB	4

struct flash_partitions {
	struct mtd_partition *parts;
	int nr_parts;
};

extern void board_flash_init(struct flash_partitions [],
				char chip_sel[][GPMC_CS_NUM], int nand_type);
extern void board_nand_init(struct mtd_partition *nand_parts,
					u8 nr_parts, u8 cs, int nand_type);
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:37 PDT 2016
Sun, Jul 24, 2016  1:20:14 PM
Mon, Jul 25, 2016  6:28:29 PM
Mon, Jul 25, 2016  7:41:35 PM
Tue, Jul 26, 2016  2:17:19 PM
