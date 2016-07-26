/**
 * dwc3-exynos.h - Samsung EXYNOS DWC3 Specific Glue layer, header.
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Author: Anton Tikhomirov <av.tikhomirov@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _DWC3_EXYNOS_H_
#define _DWC3_EXYNOS_H_

struct dwc3_exynos_data {
	int phy_type;
	int (*phy_init)(struct platform_device *pdev, int type);
	int (*phy_exit)(struct platform_device *pdev, int type);
};

#endif /* _DWC3_EXYNOS_H_ */
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:59 PDT 2016
Sun, Jul 24, 2016  2:43:16 PM
Mon, Jul 25, 2016  9:17:14 PM
