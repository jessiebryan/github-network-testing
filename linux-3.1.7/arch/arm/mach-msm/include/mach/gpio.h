/*
 * Copyright (C) 2007 Google, Inc.
 * Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 * Author: Mike Lockwood <lockwood@android.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __ASM_ARCH_MSM_GPIO_H
#define __ASM_ARCH_MSM_GPIO_H

#include <asm-generic/gpio.h>

#define gpio_get_value  __gpio_get_value
#define gpio_set_value  __gpio_set_value
#define gpio_cansleep   __gpio_cansleep
#define gpio_to_irq     __gpio_to_irq

#endif /* __ASM_ARCH_MSM_GPIO_H */
Tue Jul 19 12:36:38 PDT 2016
Fri Jul 22 15:43:05 PDT 2016
Sun, Jul 24, 2016  1:53:09 PM
Mon, Jul 25, 2016  8:20:21 PM
