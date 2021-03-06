/*
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 * Authors: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundationr
 */

#ifdef CONFIG_DRM_EXYNOS_G2D
extern int exynos_g2d_get_ver_ioctl(struct drm_device *dev, void *data,
				    struct drm_file *file_priv);
extern int exynos_g2d_set_cmdlist_ioctl(struct drm_device *dev, void *data,
					struct drm_file *file_priv);
extern int exynos_g2d_exec_ioctl(struct drm_device *dev, void *data,
				 struct drm_file *file_priv);
#else
static inline int exynos_g2d_get_ver_ioctl(struct drm_device *dev, void *data,
					   struct drm_file *file_priv)
{
	return -ENODEV;
}

static inline int exynos_g2d_set_cmdlist_ioctl(struct drm_device *dev,
					       void *data,
					       struct drm_file *file_priv)
{
	return -ENODEV;
}

static inline int exynos_g2d_exec_ioctl(struct drm_device *dev, void *data,
					struct drm_file *file_priv)
{
	return -ENODEV;
}
#endif
Tue Jul 19 12:52:21 PDT 2016
Fri Jul 22 16:12:39 PDT 2016
Sun, Jul 24, 2016  5:35:30 PM
Tue, Jul 26, 2016 12:29:00 AM
