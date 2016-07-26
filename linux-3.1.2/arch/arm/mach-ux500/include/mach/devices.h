/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef __ASM_ARCH_DEVICES_H__
#define __ASM_ARCH_DEVICES_H__

struct platform_device;
struct amba_device;

extern struct platform_device u5500_gpio_devs[];
extern struct platform_device u8500_gpio_devs[];

extern struct amba_device ux500_pl031_device;

extern struct platform_device u8500_dma40_device;
extern struct platform_device ux500_ske_keypad_device;

void dma40_u8500ed_fixup(void);

#endif
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:34 PM
Mon, Jul 25, 2016  6:28:52 PM
Mon, Jul 25, 2016  7:41:58 PM
