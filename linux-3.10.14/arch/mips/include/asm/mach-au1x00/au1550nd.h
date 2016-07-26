/*
 * platform data for the Au1550 NAND driver
 */

#ifndef _AU1550ND_H_
#define _AU1550ND_H_

#include <linux/mtd/partitions.h>

struct au1550nd_platdata {
	struct mtd_partition *parts;
	int num_parts;
	int devwidth;	/* 0 = 8bit device, 1 = 16bit device */
};

#endif
Tue Jul 19 12:43:54 PDT 2016
Fri Jul 22 15:56:37 PDT 2016
Sun, Jul 24, 2016  3:33:10 PM
Mon, Jul 25, 2016 10:13:19 PM
