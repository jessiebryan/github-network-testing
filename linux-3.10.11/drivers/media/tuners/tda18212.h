/*
 * NXP TDA18212HN silicon tuner driver
 *
 * Copyright (C) 2011 Antti Palosaari <crope@iki.fi>
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License along
 *    with this program; if not, write to the Free Software Foundation, Inc.,
 *    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef TDA18212_H
#define TDA18212_H

#include <linux/kconfig.h>
#include "dvb_frontend.h"

struct tda18212_config {
	u8 i2c_address;

	u16 if_dvbt_6;
	u16 if_dvbt_7;
	u16 if_dvbt_8;
	u16 if_dvbt2_5;
	u16 if_dvbt2_6;
	u16 if_dvbt2_7;
	u16 if_dvbt2_8;
	u16 if_dvbc;
};

#if IS_ENABLED(CONFIG_MEDIA_TUNER_TDA18212)
extern struct dvb_frontend *tda18212_attach(struct dvb_frontend *fe,
	struct i2c_adapter *i2c, struct tda18212_config *cfg);
#else
static inline struct dvb_frontend *tda18212_attach(struct dvb_frontend *fe,
	struct i2c_adapter *i2c, struct tda18212_config *cfg)
{
	printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
	return NULL;
}
#endif

#endif
Tue Jul 19 12:42:05 PDT 2016
Fri Jul 22 15:53:25 PDT 2016
Sun, Jul 24, 2016  3:08:10 PM
Mon, Jul 25, 2016  9:45:23 PM
