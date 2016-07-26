/*
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 * Copyright 2008 Sascha Hauer, kernel@pengutronix.de
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef __ASM_ARCH_NAND_H
#define __ASM_ARCH_NAND_H

#include <linux/mtd/partitions.h>

struct mxc_nand_platform_data {
	unsigned int width;	/* data bus width in bytes */
	unsigned int hw_ecc:1;	/* 0 if suppress hardware ECC */
	unsigned int flash_bbt:1; /* set to 1 to use a flash based bbt */
	struct mtd_partition *parts;	/* partition table */
	int nr_parts;			/* size of parts */
};
#endif /* __ASM_ARCH_NAND_H */
Tue Jul 19 12:39:35 PDT 2016
Fri Jul 22 15:48:43 PDT 2016
Sun, Jul 24, 2016  2:34:06 PM
Mon, Jul 25, 2016  9:07:03 PM
