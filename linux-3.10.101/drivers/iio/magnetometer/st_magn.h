/*
 * STMicroelectronics magnetometers driver
 *
 * Copyright 2012-2013 STMicroelectronics Inc.
 *
 * Denis Ciocca <denis.ciocca@st.com>
 * v. 1.0.0
 * Licensed under the GPL-2.
 */

#ifndef ST_MAGN_H
#define ST_MAGN_H

#include <linux/types.h>
#include <linux/iio/common/st_sensors.h>

#define LSM303DLHC_MAGN_DEV_NAME	"lsm303dlhc_magn"
#define LSM303DLM_MAGN_DEV_NAME		"lsm303dlm_magn"
#define LIS3MDL_MAGN_DEV_NAME		"lis3mdl"

int st_magn_common_probe(struct iio_dev *indio_dev);
void st_magn_common_remove(struct iio_dev *indio_dev);

#ifdef CONFIG_IIO_BUFFER
int st_magn_allocate_ring(struct iio_dev *indio_dev);
void st_magn_deallocate_ring(struct iio_dev *indio_dev);
#else /* CONFIG_IIO_BUFFER */
static inline int st_magn_probe_trigger(struct iio_dev *indio_dev, int irq)
{
	return 0;
}
static inline void st_magn_remove_trigger(struct iio_dev *indio_dev, int irq)
{
	return;
}
static inline int st_magn_allocate_ring(struct iio_dev *indio_dev)
{
	return 0;
}
static inline void st_magn_deallocate_ring(struct iio_dev *indio_dev)
{
}
#endif /* CONFIG_IIO_BUFFER */

#endif /* ST_MAGN_H */
Tue Jul 19 12:40:39 PDT 2016
Fri Jul 22 15:50:49 PDT 2016
Sun, Jul 24, 2016  2:49:17 PM
Mon, Jul 25, 2016  9:24:05 PM
