/*
 *  Driver for Freescale MC44S803 Low Power CMOS Broadband Tuner
 *
 *  Copyright (c) 2009 Jochen Friedrich <jochen@scram.de>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.=
 */

#ifndef MC44S803_H
#define MC44S803_H

struct dvb_frontend;
struct i2c_adapter;

struct mc44s803_config {
	u8 i2c_address;
	u8 dig_out;
};

#if defined(CONFIG_MEDIA_TUNER_MC44S803) || \
    (defined(CONFIG_MEDIA_TUNER_MC44S803_MODULE) && defined(MODULE))
extern struct dvb_frontend *mc44s803_attach(struct dvb_frontend *fe,
	 struct i2c_adapter *i2c, struct mc44s803_config *cfg);
#else
static inline struct dvb_frontend *mc44s803_attach(struct dvb_frontend *fe,
	 struct i2c_adapter *i2c, struct mc44s803_config *cfg)
{
	printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
	return NULL;
}
#endif /* CONFIG_MEDIA_TUNER_MC44S803 */

#endif
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:06 PDT 2016
Sun, Jul 24, 2016  1:23:56 PM
Mon, Jul 25, 2016  6:32:55 PM
Mon, Jul 25, 2016  7:45:55 PM
Tue, Jul 26, 2016  2:21:28 PM
