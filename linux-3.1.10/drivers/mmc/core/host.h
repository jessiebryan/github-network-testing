/*
 *  linux/drivers/mmc/core/host.h
 *
 *  Copyright (C) 2003 Russell King, All Rights Reserved.
 *  Copyright 2007 Pierre Ossman
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _MMC_CORE_HOST_H
#define _MMC_CORE_HOST_H
#include <linux/mmc/host.h>

int mmc_register_host_class(void);
void mmc_unregister_host_class(void);

#ifdef CONFIG_MMC_CLKGATE
void mmc_host_clk_hold(struct mmc_host *host);
void mmc_host_clk_release(struct mmc_host *host);
unsigned int mmc_host_clk_rate(struct mmc_host *host);

#else
static inline void mmc_host_clk_hold(struct mmc_host *host)
{
}

static inline void mmc_host_clk_release(struct mmc_host *host)
{
}

static inline unsigned int mmc_host_clk_rate(struct mmc_host *host)
{
	return host->ios.clock;
}
#endif

void mmc_host_deeper_disable(struct work_struct *work);

#endif

Tue Jul 19 12:33:30 PDT 2016
Fri Jul 22 15:38:04 PDT 2016
Sun, Jul 24, 2016  1:16:00 PM
Mon, Jul 25, 2016  6:23:23 PM
Mon, Jul 25, 2016  7:36:36 PM
Tue, Jul 26, 2016  2:12:32 PM
