/*
 * AD5933 AD5934 Impedance Converter, Network Analyzer
 *
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2.
 */

#ifndef IIO_ADC_AD5933_H_
#define IIO_ADC_AD5933_H_

/*
 * TODO: struct ad5933_platform_data needs to go into include/linux/iio
 */

/**
 * struct ad5933_platform_data - platform specific data
 * @ext_clk_Hz:		the external clock frequency in Hz, if not set
 *			the driver uses the internal clock (16.776 MHz)
 * @vref_mv:		the external reference voltage in millivolt
 */

struct ad5933_platform_data {
	unsigned long			ext_clk_Hz;
	unsigned short			vref_mv;
};

#endif /* IIO_ADC_AD5933_H_ */
Tue Jul 19 12:38:50 PDT 2016
Fri Jul 22 15:47:12 PDT 2016
Sun, Jul 24, 2016  2:23:12 PM
Mon, Jul 25, 2016  8:54:54 PM
