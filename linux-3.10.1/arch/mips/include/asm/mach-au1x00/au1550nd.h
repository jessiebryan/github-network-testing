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
Tue Jul 19 12:38:34 PDT 2016
Fri Jul 22 15:46:41 PDT 2016
Sun, Jul 24, 2016  2:19:29 PM
Mon, Jul 25, 2016  8:50:45 PM
