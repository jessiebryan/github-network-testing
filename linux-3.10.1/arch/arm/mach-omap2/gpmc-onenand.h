/*
 *  arch/arm/mach-omap2/gpmc-onenand.h
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 */

#ifndef	__OMAP2_GPMC_ONENAND_H
#define	__OMAP2_GPMC_ONENAND_H

#include <linux/platform_data/mtd-onenand-omap2.h>

#if IS_ENABLED(CONFIG_MTD_ONENAND_OMAP2)
extern void gpmc_onenand_init(struct omap_onenand_platform_data *d);
#else
#define board_onenand_data	NULL
static inline void gpmc_onenand_init(struct omap_onenand_platform_data *d)
{
}
#endif

#endif
Tue Jul 19 12:38:28 PDT 2016
Fri Jul 22 15:46:28 PDT 2016
Sun, Jul 24, 2016  2:17:57 PM
Mon, Jul 25, 2016  8:49:01 PM
