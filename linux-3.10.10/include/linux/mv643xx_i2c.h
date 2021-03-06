/*
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _MV64XXX_I2C_H_
#define _MV64XXX_I2C_H_

#include <linux/types.h>

#define MV64XXX_I2C_CTLR_NAME	"mv64xxx_i2c"

/* i2c Platform Device, Driver Data */
struct mv64xxx_i2c_pdata {
	u32	freq_m;
	u32	freq_n;
	u32	timeout;	/* In milliseconds */
};

#endif /*_MV64XXX_I2C_H_*/
Tue Jul 19 12:39:34 PDT 2016
Fri Jul 22 15:48:42 PDT 2016
Sun, Jul 24, 2016  2:33:56 PM
Mon, Jul 25, 2016  9:06:52 PM
