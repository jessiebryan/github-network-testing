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
Tue Jul 19 12:35:51 PDT 2016
Fri Jul 22 15:41:32 PDT 2016
Sun, Jul 24, 2016  1:41:38 PM
Mon, Jul 25, 2016  8:06:46 PM
Tue, Jul 26, 2016  2:41:01 PM
