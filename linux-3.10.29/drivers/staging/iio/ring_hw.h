/*
 * ring_hw.h - common functionality for iio hardware ring buffers
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * Copyright (c) 2009 Jonathan Cameron <jic23@kernel.org>
 *
 */

/**
 * struct iio_hw_ring_buffer- hardware ring buffer
 * @buf:	generic ring buffer elements
 * @private:	device specific data
 */
struct iio_hw_buffer {
	struct iio_buffer buf;
	void *private;
};

#define iio_to_hw_buf(r) container_of(r, struct iio_hw_buffer, buf)
Tue Jul 19 12:53:46 PDT 2016
Fri Jul 22 16:15:24 PDT 2016
Sun, Jul 24, 2016  5:55:52 PM
Tue, Jul 26, 2016 12:51:29 AM
