/*
 * arch/arm/mach-w90x900/include/mach/mfp.h
 *
 * Copyright (c) 2010 Nuvoton technology corporation.
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * Based on arch/arm/mach-s3c2410/include/mach/map.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation;version 2 of the License.
 *
 */

#ifndef __ASM_ARCH_MFP_H
#define __ASM_ARCH_MFP_H

extern void mfp_set_groupf(struct device *dev);
extern void mfp_set_groupc(struct device *dev);
extern void mfp_set_groupi(struct device *dev);
extern void mfp_set_groupg(struct device *dev, const char *subname);
extern void mfp_set_groupd(struct device *dev, const char *subname);

#endif /* __ASM_ARCH_MFP_H */
Tue Jul 19 12:45:06 PDT 2016
Fri Jul 22 15:58:50 PDT 2016
Sun, Jul 24, 2016  3:50:20 PM
Mon, Jul 25, 2016 10:32:23 PM
