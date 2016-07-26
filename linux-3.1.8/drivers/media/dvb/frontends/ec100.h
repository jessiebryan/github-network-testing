/*
 * E3C EC100 demodulator driver
 *
 * Copyright (C) 2009 Antti Palosaari <crope@iki.fi>
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
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef EC100_H
#define EC100_H

#include <linux/dvb/frontend.h>

struct ec100_config {
	/* demodulator's I2C address */
	u8 demod_address;
};


#if defined(CONFIG_DVB_EC100) || \
	(defined(CONFIG_DVB_EC100_MODULE) && defined(MODULE))
extern struct dvb_frontend *ec100_attach(const struct ec100_config *config,
	struct i2c_adapter *i2c);
#else
static inline struct dvb_frontend *ec100_attach(
	const struct ec100_config *config, struct i2c_adapter *i2c)
{
	printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
	return NULL;
}
#endif

#endif /* EC100_H */
Tue Jul 19 12:37:30 PDT 2016
Fri Jul 22 15:44:43 PDT 2016
Sun, Jul 24, 2016  2:05:15 PM
Mon, Jul 25, 2016  8:34:44 PM
