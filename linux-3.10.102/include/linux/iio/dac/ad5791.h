/*
 * AD5791 SPI DAC driver
 *
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2.
 */

#ifndef SPI_AD5791_H_
#define SPI_AD5791_H_

/**
 * struct ad5791_platform_data - platform specific information
 * @vref_pos_mv:	Vdd Positive Analog Supply Volatge (mV)
 * @vref_neg_mv:	Vdd Negative Analog Supply Volatge (mV)
 * @use_rbuf_gain2:	ext. amplifier connected in gain of two configuration
 */

struct ad5791_platform_data {
	u16				vref_pos_mv;
	u16				vref_neg_mv;
	bool				use_rbuf_gain2;
};

#endif /* SPI_AD5791_H_ */
Tue Jul 19 12:41:29 PDT 2016
Fri Jul 22 15:52:31 PDT 2016
Sun, Jul 24, 2016  3:01:18 PM
Mon, Jul 25, 2016  9:37:38 PM
