/*
 * OMAP2+ WDTIMER-specific function prototypes
 *
 * Copyright (C) 2012 Texas Instruments, Inc.
 * Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __LINUX_PLATFORM_DATA_OMAP_WD_TIMER_H
#define __LINUX_PLATFORM_DATA_OMAP_WD_TIMER_H

#include <linux/types.h>

/*
 * Standardized OMAP reset source bits
 *
 * This is a subset of the ones listed in arch/arm/mach-omap2/prm.h
 * and are the only ones needed in the watchdog driver.
 */
#define OMAP_MPU_WD_RST_SRC_ID_SHIFT				3

/**
 * struct omap_wd_timer_platform_data - WDTIMER integration to the host SoC
 * @read_reset_sources - fn ptr for the SoC to indicate the last reset cause
 *
 * The function pointed to by @read_reset_sources must return its data
 * in a standard format - search for RST_SRC_ID_SHIFT in
 * arch/arm/mach-omap2
 */
struct omap_wd_timer_platform_data {
	u32 (*read_reset_sources)(void);
};

#endif
Tue Jul 19 12:38:57 PDT 2016
Fri Jul 22 15:47:26 PDT 2016
Sun, Jul 24, 2016  2:24:54 PM
Mon, Jul 25, 2016  8:56:48 PM
