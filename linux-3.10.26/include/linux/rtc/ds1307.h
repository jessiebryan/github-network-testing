/*
 * ds1307.h - platform_data for the ds1307 (and variants) rtc driver
 * (C) Copyright 2012 by Wolfram Sang, Pengutronix e.K.
 * same license as the driver
 */

#ifndef _LINUX_DS1307_H
#define _LINUX_DS1307_H

#include <linux/types.h>

#define DS1307_TRICKLE_CHARGER_250_OHM	0x01
#define DS1307_TRICKLE_CHARGER_2K_OHM	0x02
#define DS1307_TRICKLE_CHARGER_4K_OHM	0x03
#define DS1307_TRICKLE_CHARGER_NO_DIODE	0x04
#define DS1307_TRICKLE_CHARGER_DIODE	0x08

struct ds1307_platform_data {
	u8 trickle_charger_setup;
};

#endif /* _LINUX_DS1307_H */
Tue Jul 19 12:51:57 PDT 2016
Fri Jul 22 16:11:52 PDT 2016
Sun, Jul 24, 2016  5:29:46 PM
Tue, Jul 26, 2016 12:22:39 AM
