/* linux/arch/arm/mach-msm/devices.h
 *
 * Copyright (C) 2008 Google, Inc.
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

#ifndef __ARCH_ARM_MACH_MSM_DEVICES_H
#define __ARCH_ARM_MACH_MSM_DEVICES_H

#include <linux/clkdev.h>

#include "clock.h"

extern struct platform_device msm_device_gpio_7201;
extern struct platform_device msm_device_gpio_7x30;
extern struct platform_device msm_device_gpio_8x50;

extern struct platform_device msm_device_uart1;
extern struct platform_device msm_device_uart2;
extern struct platform_device msm_device_uart3;

extern struct platform_device msm8960_device_uart_gsbi2;
extern struct platform_device msm8960_device_uart_gsbi5;

extern struct platform_device msm_device_sdc1;
extern struct platform_device msm_device_sdc2;
extern struct platform_device msm_device_sdc3;
extern struct platform_device msm_device_sdc4;

extern struct platform_device msm_device_hsusb;
extern struct platform_device msm_device_otg;
extern struct platform_device msm_device_hsusb_host;

extern struct platform_device msm_device_i2c;

extern struct platform_device msm_device_smd;

extern struct platform_device msm_device_nand;

extern struct platform_device msm_device_mddi0;
extern struct platform_device msm_device_mddi1;
extern struct platform_device msm_device_mdp;

extern struct clk_lookup msm_clocks_7x01a[];
extern unsigned msm_num_clocks_7x01a;

extern struct clk_lookup msm_clocks_7x30[];
extern unsigned msm_num_clocks_7x30;

extern struct clk_lookup msm_clocks_8x50[];
extern unsigned msm_num_clocks_8x50;

#endif
Tue Jul 19 12:45:41 PDT 2016
Fri Jul 22 15:59:58 PDT 2016
Sun, Jul 24, 2016  3:59:13 PM
Mon, Jul 25, 2016 10:42:16 PM
