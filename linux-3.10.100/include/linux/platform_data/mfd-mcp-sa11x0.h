/*
 *  arch/arm/mach-sa1100/include/mach/mcp.h
 *
 *  Copyright (C) 2005 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_ARM_ARCH_MCP_H
#define __ASM_ARM_ARCH_MCP_H

#include <linux/types.h>

struct mcp_plat_data {
	u32 mccr0;
	u32 mccr1;
	unsigned int sclk_rate;
	void *codec_pdata;
};

#endif
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:59 PDT 2016
Sun, Jul 24, 2016  2:43:18 PM
