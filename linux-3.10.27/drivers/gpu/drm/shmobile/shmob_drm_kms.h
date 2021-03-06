/*
 * shmob_drm_kms.h  --  SH Mobile DRM Mode Setting
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

#ifndef __SHMOB_DRM_KMS_H__
#define __SHMOB_DRM_KMS_H__

#include <linux/types.h>

struct drm_gem_cma_object;
struct shmob_drm_device;

struct shmob_drm_format_info {
	u32 fourcc;
	unsigned int bpp;
	bool yuv;
	u32 lddfr;
	unsigned int meram;
};

const struct shmob_drm_format_info *shmob_drm_format_info(u32 fourcc);

int shmob_drm_modeset_init(struct shmob_drm_device *sdev);

#endif /* __SHMOB_DRM_KMS_H__ */
Tue Jul 19 12:52:21 PDT 2016
Fri Jul 22 16:12:40 PDT 2016
Sun, Jul 24, 2016  5:35:38 PM
Tue, Jul 26, 2016 12:29:09 AM
