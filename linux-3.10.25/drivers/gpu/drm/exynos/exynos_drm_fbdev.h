/*
 * Copyright (c) 2011 Samsung Electronics Co., Ltd.
 *
 * Authors:
 *	Inki Dae <inki.dae@samsung.com>
 *	Joonyoung Shim <jy0922.shim@samsung.com>
 *	Seung-Woo Kim <sw0312.kim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _EXYNOS_DRM_FBDEV_H_
#define _EXYNOS_DRM_FBDEV_H_

int exynos_drm_fbdev_init(struct drm_device *dev);
int exynos_drm_fbdev_reinit(struct drm_device *dev);
void exynos_drm_fbdev_fini(struct drm_device *dev);
void exynos_drm_fbdev_restore_mode(struct drm_device *dev);

#endif
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:06 PDT 2016
Sun, Jul 24, 2016  5:16:53 PM
Tue, Jul 26, 2016 12:08:28 AM
