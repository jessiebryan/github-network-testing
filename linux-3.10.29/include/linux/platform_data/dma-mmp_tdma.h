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
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:32 PM
Tue, Jul 26, 2016 12:53:18 AM
