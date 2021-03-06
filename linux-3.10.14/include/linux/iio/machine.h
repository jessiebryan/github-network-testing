/*
 * Industrial I/O in kernel access map definitions for board files.
 *
 * Copyright (c) 2011 Jonathan Cameron
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef __LINUX_IIO_MACHINE_H__
#define __LINUX_IIO_MACHINE_H__

/**
 * struct iio_map - description of link between consumer and device channels
 * @adc_channel_label:	Label used to identify the channel on the provider.
 *			This is matched against the datasheet_name element
 *			of struct iio_chan_spec.
 * @consumer_dev_name:	Name to uniquely identify the consumer device.
 * @consumer_channel:	Unique name used to identify the channel on the
 *			consumer side.
 * @consumer_data:	Data about the channel for use by the consumer driver.
 */
struct iio_map {
	const char *adc_channel_label;
	const char *consumer_dev_name;
	const char *consumer_channel;
	void *consumer_data;
};

#endif
Tue Jul 19 12:44:15 PDT 2016
Fri Jul 22 15:57:17 PDT 2016
Sun, Jul 24, 2016  3:38:10 PM
Mon, Jul 25, 2016 10:18:52 PM
