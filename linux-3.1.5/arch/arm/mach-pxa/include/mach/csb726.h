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

Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:59 PDT 2016
Sun, Jul 24, 2016  1:45:05 PM
Mon, Jul 25, 2016  8:10:50 PM
Tue, Jul 26, 2016  2:44:48 PM
