/*
 * Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
/*
 * Qualcomm PMIC 8921 driver header file
 *
 */

#ifndef __MFD_PM8921_H
#define __MFD_PM8921_H

#include <linux/device.h>
#include <linux/mfd/pm8xxx/irq.h>

#define PM8921_NR_IRQS		256

struct pm8921_platform_data {
	int					irq_base;
	struct pm8xxx_irq_platform_data		*irq_pdata;
};

#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:03 PM
Mon, Jul 25, 2016  8:08:26 PM
