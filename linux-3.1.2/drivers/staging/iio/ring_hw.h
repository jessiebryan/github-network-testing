/*
 * ring_hw.h - common functionality for iio hardware ring buffers
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * Copyright (c) 2009 Jonathan Cameron <jic23@cam.ac.uk>
 *
 */

/**
 * struct iio_hw_ring_buffer- hardware ring buffer
 * @buf:	generic ring buffer elements
 * @private:	device specific data
 */
struct iio_hw_ring_buffer {
	struct iio_ring_buffer buf;
	void *private;
};

#define iio_to_hw_ring_buf(r) container_of(r, struct iio_hw_ring_buffer, buf)
Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:16 PDT 2016
Sun, Jul 24, 2016  1:25:10 PM
Mon, Jul 25, 2016  6:34:23 PM
Mon, Jul 25, 2016  7:47:21 PM
Tue, Jul 26, 2016  2:22:48 PM
