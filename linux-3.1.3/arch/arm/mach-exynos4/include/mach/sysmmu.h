/* linux/arch/arm/mach-exynos4/include/mach/sysmmu.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Samsung sysmmu driver for EXYNOS4
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARM_ARCH_SYSMMU_H
#define __ASM_ARM_ARCH_SYSMMU_H __FILE__

enum exynos4_sysmmu_ips {
	SYSMMU_MDMA,
	SYSMMU_SSS,
	SYSMMU_FIMC0,
	SYSMMU_FIMC1,
	SYSMMU_FIMC2,
	SYSMMU_FIMC3,
	SYSMMU_JPEG,
	SYSMMU_FIMD0,
	SYSMMU_FIMD1,
	SYSMMU_PCIe,
	SYSMMU_G2D,
	SYSMMU_ROTATOR,
	SYSMMU_MDMA2,
	SYSMMU_TV,
	SYSMMU_MFC_L,
	SYSMMU_MFC_R,
	EXYNOS4_SYSMMU_TOTAL_IPNUM,
};

#define S5P_SYSMMU_TOTAL_IPNUM		EXYNOS4_SYSMMU_TOTAL_IPNUM

extern const char *sysmmu_ips_name[EXYNOS4_SYSMMU_TOTAL_IPNUM];

typedef enum exynos4_sysmmu_ips sysmmu_ips;

void sysmmu_clk_init(struct device *dev, sysmmu_ips ips);
void sysmmu_clk_enable(sysmmu_ips ips);
void sysmmu_clk_disable(sysmmu_ips ips);

#endif /* __ASM_ARM_ARCH_SYSMMU_H */
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:16 PM
Mon, Jul 25, 2016  6:38:06 PM
Mon, Jul 25, 2016  7:51:00 PM
