/*
 *
 * arch/arm/mach-u300/mmc.h
 *
 *
 * Copyright (C) 2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 *
 * Author: Jonas Aaberg <jonas.aberg@stericsson.com>
 */
#ifndef MMC_H
#define MMC_H

#include <linux/amba/bus.h>

int __devinit mmc_init(struct amba_device *adev);

#endif
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:22 PDT 2016
Sun, Jul 24, 2016  2:10:02 PM
