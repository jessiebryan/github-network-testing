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
Tue Jul 19 12:53:30 PDT 2016
Fri Jul 22 16:14:53 PDT 2016
Sun, Jul 24, 2016  5:52:07 PM
Tue, Jul 26, 2016 12:47:20 AM
