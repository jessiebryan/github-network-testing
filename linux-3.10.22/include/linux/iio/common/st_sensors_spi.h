/*
 * STMicroelectronics sensors spi library driver
 *
 * Copyright 2012-2013 STMicroelectronics Inc.
 *
 * Denis Ciocca <denis.ciocca@st.com>
 *
 * Licensed under the GPL-2.
 */

#ifndef ST_SENSORS_SPI_H
#define ST_SENSORS_SPI_H

#include <linux/spi/spi.h>
#include <linux/iio/common/st_sensors.h>

void st_sensors_spi_configure(struct iio_dev *indio_dev,
			struct spi_device *spi, struct st_sensor_data *sdata);

#endif /* ST_SENSORS_SPI_H */
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:49 PDT 2016
Sun, Jul 24, 2016  4:51:58 PM
Mon, Jul 25, 2016 11:40:58 PM
