/* linux/i2c/tps6507x-ts.h
 *
 * Functions to access TPS65070 touch screen chip.
 *
 * Copyright (c) 2009 RidgeRun (todd.fischer@ridgerun.com)
 *
 *
 *  For licencing details see kernel-base/COPYING
 */

#ifndef __LINUX_I2C_TPS6507X_TS_H
#define __LINUX_I2C_TPS6507X_TS_H

/* Board specific touch screen initial values */
struct touchscreen_init_data {
	int	poll_period;	/* ms */
	int	vref;		/* non-zero to leave vref on */
	__u16	min_pressure;	/* min reading to be treated as a touch */
	__u16	vendor;
	__u16	product;
	__u16	version;
};

#endif /*  __LINUX_I2C_TPS6507X_TS_H */
Tue Jul 19 12:43:36 PDT 2016
Fri Jul 22 15:56:05 PDT 2016
Sun, Jul 24, 2016  3:28:58 PM
Mon, Jul 25, 2016 10:08:37 PM
