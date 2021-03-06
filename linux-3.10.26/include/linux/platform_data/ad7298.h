/*
 * AD7298 SPI ADC driver
 *
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2.
 */

#ifndef __LINUX_PLATFORM_DATA_AD7298_H__
#define __LINUX_PLATFORM_DATA_AD7298_H__

/**
 * struct ad7298_platform_data - Platform data for the ad7298 ADC driver
 * @ext_ref: Whether to use an external reference voltage.
 **/
struct ad7298_platform_data {
	bool ext_ref;
};

#endif /* IIO_ADC_AD7298_H_ */
Tue Jul 19 12:51:56 PDT 2016
Fri Jul 22 16:11:50 PDT 2016
Sun, Jul 24, 2016  5:29:34 PM
Tue, Jul 26, 2016 12:22:26 AM
