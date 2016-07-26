/*
 * mx1_camera.h - i.MX1/i.MXL camera driver header file
 *
 * Copyright (c) 2008, Paulius Zaleckas <paulius.zaleckas@teltonika.lt>
 * Copyright (C) 2009, Darius Augulis <augulis.darius@gmail.com>
 *
 * Based on PXA camera.h file:
 * Copyright (C) 2003, Intel Corporation
 * Copyright (C) 2008, Guennadi Liakhovetski <kernel@pengutronix.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#define MX1_CAMERA_DATA_HIGH	1
#define MX1_CAMERA_PCLK_RISING	2
#define MX1_CAMERA_VSYNC_HIGH	4

extern unsigned char mx1_camera_sof_fiq_start, mx1_camera_sof_fiq_end;

/**
 * struct mx1_camera_pdata - i.MX1/i.MXL camera platform data
 * @mclk_10khz:	master clock frequency in 10kHz units
 * @flags:	MX1 camera platform flags
 */
struct mx1_camera_pdata {
	unsigned long mclk_10khz;
	unsigned long flags;
};

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:01 PDT 2016
Sun, Jul 24, 2016  1:45:24 PM
Mon, Jul 25, 2016  8:11:14 PM
