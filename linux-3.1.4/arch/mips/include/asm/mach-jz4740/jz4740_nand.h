/*
 *  Copyright (C) 2009-2010, Lars-Peter Clausen <lars@metafoo.de>
 *  JZ4740 SoC NAND controller driver
 *
 *  This program is free software; you can redistribute	 it and/or modify it
 *  under  the terms of	 the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the	License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __ASM_MACH_JZ4740_JZ4740_NAND_H__
#define __ASM_MACH_JZ4740_JZ4740_NAND_H__

#include <linux/mtd/nand.h>
#include <linux/mtd/partitions.h>

struct jz_nand_platform_data {
	int			num_partitions;
	struct mtd_partition	*partitions;

	struct nand_ecclayout	*ecc_layout;

	unsigned int busy_gpio;

	void (*ident_callback)(struct platform_device *, struct nand_chip *,
				struct mtd_partition **, int *num_partitions);
};

#endif
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:06 PDT 2016
Sun, Jul 24, 2016  1:38:25 PM
Mon, Jul 25, 2016  8:02:58 PM
Tue, Jul 26, 2016  2:37:27 PM
