/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LTQ_DEVICES_XWAY_H__
#define _LTQ_DEVICES_XWAY_H__

#include "../devices.h"
#include <linux/phy.h>

extern void ltq_register_gpio(void);
extern void ltq_register_gpio_stp(void);
extern void ltq_register_ase_asc(void);
extern void ltq_register_etop(struct ltq_eth_data *eth);

#endif
Tue Jul 19 12:36:46 PDT 2016
Fri Jul 22 15:43:21 PDT 2016
Sun, Jul 24, 2016  1:55:07 PM
Mon, Jul 25, 2016  8:22:40 PM
