/*
 * Copyright 2011 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_MXS_MMC_H__
#define __MACH_MXS_MMC_H__

struct mxs_mmc_platform_data {
	int wp_gpio;	/* write protect pin */
	unsigned int flags;
#define SLOTF_4_BIT_CAPABLE	(1 << 0)
#define SLOTF_8_BIT_CAPABLE	(1 << 1)
};
#endif /* __MACH_MXS_MMC_H__ */
Tue Jul 19 12:35:30 PDT 2016
Fri Jul 22 15:40:51 PDT 2016
Sun, Jul 24, 2016  1:36:42 PM
Mon, Jul 25, 2016  8:00:57 PM
Tue, Jul 26, 2016  2:35:33 PM
