#ifndef __BCM47XXNFLASH_H
#define __BCM47XXNFLASH_H

#ifndef pr_fmt
#define pr_fmt(fmt)		KBUILD_MODNAME ": " fmt
#endif

#include <linux/mtd/mtd.h>
#include <linux/mtd/nand.h>

struct bcm47xxnflash {
	struct bcma_drv_cc *cc;

	struct nand_chip nand_chip;
	struct mtd_info mtd;

	unsigned curr_command;
	int curr_page_addr;
	int curr_column;

	u8 id_data[8];
};

int bcm47xxnflash_ops_bcm4706_init(struct bcm47xxnflash *b47n);

#endif /* BCM47XXNFLASH */
Tue Jul 19 12:47:53 PDT 2016
Fri Jul 22 16:04:07 PDT 2016
Sun, Jul 24, 2016  4:31:19 PM
