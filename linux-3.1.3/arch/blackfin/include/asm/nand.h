/*
 * BF5XX - NAND flash controller platform_device info
 *
 * Copyright 2007-2008 Analog Devices, Inc.
 *
 * Licensed under the GPL-2
 */

/* struct bf5xx_nand_platform
 *
 * define a interface between platform board specific code and
 * bf54x NFC driver.
 *
 * nr_partitions = number of partitions pointed to be partitoons (or zero)
 * partitions	 = mtd partition list
 */

#define NFC_PG_SIZE_OFFSET	9

#define NFC_NWIDTH_8		0
#define NFC_NWIDTH_16		1
#define NFC_NWIDTH_OFFSET	8

#define NFC_RDDLY_OFFSET	4
#define NFC_WRDLY_OFFSET	0

#define NFC_STAT_NBUSY		1

struct bf5xx_nand_platform {
	/* NAND chip information */
	unsigned short		data_width;

	/* RD/WR strobe delay timing information, all times in SCLK cycles */
	unsigned short		rd_dly;
	unsigned short		wr_dly;

	/* NAND MTD partition information */
	int                     nr_partitions;
	struct mtd_partition    *partitions;
};
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:49 PDT 2016
Sun, Jul 24, 2016  1:29:10 PM
Mon, Jul 25, 2016  6:39:11 PM
Mon, Jul 25, 2016  7:52:03 PM
Tue, Jul 26, 2016  2:27:14 PM
