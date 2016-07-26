/*
 * STMicroelectronics sensors i2c library driver
 *
 * Copyright 2012-2013 STMicroelectronics Inc.
 *
 * Denis Ciocca <denis.ciocca@st.com>
 *
 * Licensed under the GPL-2.
 */

#ifndef ST_SENSORS_I2C_H
#define ST_SENSORS_I2C_H

#include <linux/i2c.h>
#include <linux/iio/common/st_sensors.h>

void st_sensors_i2c_configure(struct iio_dev *indio_dev,
		struct i2c_client *client, struct st_sensor_data *sdata);

#endif /* ST_SENSORS_I2C_H */
Tue Jul 19 12:48:02 PDT 2016
Fri Jul 22 16:04:24 PDT 2016
Sun, Jul 24, 2016  4:33:32 PM
Mon, Jul 25, 2016 11:20:23 PM
