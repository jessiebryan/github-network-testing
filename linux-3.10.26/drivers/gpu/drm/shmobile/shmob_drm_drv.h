/*
 * shmob_drm.h  --  SH Mobile DRM driver
 *
 * Copyright (C) 2012 Renesas Corporation
 *
 * Laurent Pinchart (laurent.pinchart@ideasonboard.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __SHMOB_DRM_DRV_H__
#define __SHMOB_DRM_DRV_H__

#include <linux/kernel.h>
#include <linux/platform_data/shmob_drm.h>
#include <linux/spinlock.h>

#include "shmob_drm_crtc.h"

struct clk;
struct device;
struct drm_device;
struct sh_mobile_meram_info;

struct shmob_drm_device {
	struct device *dev;
	const struct shmob_drm_platform_data *pdata;

	void __iomem *mmio;
	struct clk *clock;
	struct sh_mobile_meram_info *meram;
	u32 lddckr;
	u32 ldmt1r;

	spinlock_t irq_lock;		/* Protects hardware LDINTR register */

	struct drm_device *ddev;

	struct shmob_drm_crtc crtc;
	struct shmob_drm_encoder encoder;
	struct shmob_drm_connector connector;
};

#endif /* __SHMOB_DRM_DRV_H__ */
Tue Jul 19 12:51:43 PDT 2016
Fri Jul 22 16:11:22 PDT 2016
Sun, Jul 24, 2016  5:26:19 PM
Tue, Jul 26, 2016 12:18:52 AM
