/*
 *  linux/arch/arm/mach-mmp/include/mach/sram.h
 *
 *  SRAM Memory Management
 *
 *  Copyright (c) 2011 Marvell Semiconductors Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 */

#ifndef __ASM_ARCH_SRAM_H
#define __ASM_ARCH_SRAM_H

#include <linux/genalloc.h>

/* ARBITRARY:  SRAM allocations are multiples of this 2^N size */
#define SRAM_GRANULARITY	512

enum sram_type {
	MMP_SRAM_UNDEFINED = 0,
	MMP_ASRAM,
	MMP_ISRAM,
};

struct sram_platdata {
	char *pool_name;
	int granularity;
};

extern struct gen_pool *sram_get_gpool(char *pool_name);

#endif /* __ASM_ARCH_SRAM_H */
Tue Jul 19 12:38:57 PDT 2016
Fri Jul 22 15:47:25 PDT 2016
Sun, Jul 24, 2016  2:24:51 PM
Mon, Jul 25, 2016  8:56:44 PM
