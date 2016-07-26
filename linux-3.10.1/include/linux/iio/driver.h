/*
 * Industrial I/O in kernel access map interface.
 *
 * Copyright (c) 2011 Jonathan Cameron
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef _IIO_INKERN_H_
#define _IIO_INKERN_H_

struct iio_map;

/**
 * iio_map_array_register() - tell the core about inkernel consumers
 * @indio_dev:	provider device
 * @map:	array of mappings specifying association of channel with client
 */
int iio_map_array_register(struct iio_dev *indio_dev,
			   struct iio_map *map);

/**
 * iio_map_array_unregister() - tell the core to remove consumer mappings for
 *				the given provider device
 * @indio_dev:	provider device
 */
int iio_map_array_unregister(struct iio_dev *indio_dev);

#endif
Tue Jul 19 12:38:55 PDT 2016
Fri Jul 22 15:47:23 PDT 2016
Sun, Jul 24, 2016  2:24:28 PM
Mon, Jul 25, 2016  8:56:18 PM
