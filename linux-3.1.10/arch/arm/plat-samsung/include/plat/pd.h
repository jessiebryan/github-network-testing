/* linux/arch/arm/plat-samsung/include/plat/pd.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_PLAT_SAMSUNG_PD_H
#define __ASM_PLAT_SAMSUNG_PD_H __FILE__

struct samsung_pd_info {
	int (*enable)(struct device *dev);
	int (*disable)(struct device *dev);
	void __iomem *base;
};

enum exynos4_pd_block {
	PD_MFC,
	PD_G3D,
	PD_LCD0,
	PD_LCD1,
	PD_TV,
	PD_CAM,
	PD_GPS
};

#endif /* __ASM_PLAT_SAMSUNG_PD_H */
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:31 PM
Mon, Jul 25, 2016  6:19:14 PM
Mon, Jul 25, 2016  7:32:31 PM
Tue, Jul 26, 2016  2:08:43 PM
