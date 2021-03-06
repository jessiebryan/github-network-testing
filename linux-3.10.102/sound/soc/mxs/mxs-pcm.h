/*
 * Copyright (C) 2011 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _MXS_PCM_H
#define _MXS_PCM_H

#include <linux/fsl/mxs-dma.h>

struct mxs_pcm_dma_params {
	struct mxs_dma_data dma_data;
	int chan_num;
};

int mxs_pcm_platform_register(struct device *dev);
void mxs_pcm_platform_unregister(struct device *dev);

#endif
Tue Jul 19 12:41:39 PDT 2016
Fri Jul 22 15:52:46 PDT 2016
Sun, Jul 24, 2016  3:03:18 PM
Mon, Jul 25, 2016  9:39:53 PM
