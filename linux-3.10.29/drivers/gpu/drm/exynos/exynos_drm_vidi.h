/* exynos_drm_vidi.h
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 * Author: Inki Dae <inki.dae@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _EXYNOS_DRM_VIDI_H_
#define _EXYNOS_DRM_VIDI_H_

#ifdef CONFIG_DRM_EXYNOS_VIDI
int vidi_connection_ioctl(struct drm_device *drm_dev, void *data,
				struct drm_file *file_priv);
#else
#define vidi_connection_ioctl	NULL
#endif

#endif
Tue Jul 19 12:53:38 PDT 2016
Fri Jul 22 16:15:09 PDT 2016
Sun, Jul 24, 2016  5:54:09 PM
Tue, Jul 26, 2016 12:49:34 AM
