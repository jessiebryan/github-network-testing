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
Tue Jul 19 12:52:34 PDT 2016
Fri Jul 22 16:13:02 PDT 2016
Sun, Jul 24, 2016  5:38:31 PM
Tue, Jul 26, 2016 12:32:18 AM
