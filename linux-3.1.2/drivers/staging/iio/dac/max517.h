/*
 * MAX517 DAC driver
 *
 * Copyright 2011 Roland Stigge <stigge@antcom.de>
 *
 * Licensed under the GPL-2 or later.
 */
#ifndef IIO_DAC_MAX517_H_
#define IIO_DAC_MAX517_H_

/*
 * TODO: struct max517_platform_data needs to go into include/linux/iio
 */

struct max517_platform_data {
	u16				vref_mv[2];
};

#endif /* IIO_DAC_MAX517_H_ */
Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:16 PDT 2016
Sun, Jul 24, 2016  1:25:09 PM
