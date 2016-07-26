/*
 *  Support for Cogent CSB726
 *
 *  Copyright (c) 2008 Dmitry Baryshkov
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 */
#ifndef CSB726_H
#define CSB726_H

#define CSB726_GPIO_IRQ_LAN	52
#define CSB726_GPIO_IRQ_SM501	53
#define CSB726_GPIO_MMC_DETECT	100
#define CSB726_GPIO_MMC_RO	101

#define CSB726_FLASH_SIZE	(64 * 1024 * 1024)
#define CSB726_FLASH_uMON	(8 * 1024 * 1024)

#define CSB726_IRQ_LAN		gpio_to_irq(CSB726_GPIO_IRQ_LAN)
#define CSB726_IRQ_SM501	gpio_to_irq(CSB726_GPIO_IRQ_SM501)

#endif

Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:35 PM
Mon, Jul 25, 2016  6:38:28 PM
Mon, Jul 25, 2016  7:51:21 PM
