/*
 * AD7780/AD7781 SPI ADC driver
 *
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2.
 */
#ifndef IIO_ADC_AD7780_H_
#define IIO_ADC_AD7780_H_

/*
 * TODO: struct ad7780_platform_data needs to go into include/linux/iio
 */

/* NOTE:
 * The AD7780 doesn't feature a dedicated SPI chip select, in addition it
 * features a dual use data out ready DOUT/RDY output.
 * In order to avoid contentions on the SPI bus, it's therefore necessary
 * to use spi bus locking combined with a dedicated GPIO to control the
 * power down reset signal of the AD7780.
 *
 * The DOUT/RDY output must also be wired to an interrupt capable GPIO.
 */

struct ad7780_platform_data {
	u16				vref_mv;
	int				gpio_pdrst;
};

#endif /* IIO_ADC_AD7780_H_ */
Tue Jul 19 12:45:26 PDT 2016
Fri Jul 22 15:59:29 PDT 2016
Sun, Jul 24, 2016  3:55:21 PM
Mon, Jul 25, 2016 10:37:58 PM
