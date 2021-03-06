/*
 * Generic Platform Camera Driver Header
 *
 * Copyright (C) 2008 Magnus Damm
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SOC_CAMERA_H__
#define __SOC_CAMERA_H__

#include <linux/videodev2.h>
#include <media/soc_camera.h>

struct device;

struct soc_camera_platform_info {
	const char *format_name;
	unsigned long format_depth;
	struct v4l2_mbus_framefmt format;
	unsigned long bus_param;
	struct soc_camera_device *icd;
	int (*set_capture)(struct soc_camera_platform_info *info, int enable);
};

static inline void soc_camera_platform_release(struct platform_device **pdev)
{
	*pdev = NULL;
}

static inline int soc_camera_platform_add(struct soc_camera_device *icd,
					  struct platform_device **pdev,
					  struct soc_camera_link *plink,
					  void (*release)(struct device *dev),
					  int id)
{
	struct soc_camera_platform_info *info = plink->priv;
	int ret;

	if (icd->link != plink)
		return -ENODEV;

	if (*pdev)
		return -EBUSY;

	*pdev = platform_device_alloc("soc_camera_platform", id);
	if (!*pdev)
		return -ENOMEM;

	info->icd = icd;

	(*pdev)->dev.platform_data = info;
	(*pdev)->dev.release = release;

	ret = platform_device_add(*pdev);
	if (ret < 0) {
		platform_device_put(*pdev);
		*pdev = NULL;
		info->icd = NULL;
	}

	return ret;
}

static inline void soc_camera_platform_del(const struct soc_camera_device *icd,
					   struct platform_device *pdev,
					   const struct soc_camera_link *plink)
{
	if (icd->link != plink || !pdev)
		return;

	platform_device_unregister(pdev);
}

#endif /* __SOC_CAMERA_H__ */
Tue Jul 19 12:36:33 PDT 2016
Fri Jul 22 15:42:55 PDT 2016
Sun, Jul 24, 2016  1:51:52 PM
Mon, Jul 25, 2016  8:18:50 PM
