/*
 * arch/arm/plat-orion/include/plat/orion_nand.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_ORION_NAND_H
#define __PLAT_ORION_NAND_H

/*
 * Device bus NAND private data
 */
struct orion_nand_data {
	struct mtd_partition *parts;
	int (*dev_ready)(struct mtd_info *mtd);
	u32 nr_parts;
	u8 ale;		/* address line number connected to ALE */
	u8 cle;		/* address line number connected to CLE */
	u8 width;	/* buswidth */
	u8 chip_delay;
};


#endif
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:34 PDT 2016
Sun, Jul 24, 2016  5:20:20 PM
Tue, Jul 26, 2016 12:12:16 AM
