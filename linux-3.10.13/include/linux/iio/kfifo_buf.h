#ifndef __LINUX_IIO_KFIFO_BUF_H__
#define __LINUX_IIO_KFIFO_BUF_H__

#include <linux/kfifo.h>
#include <linux/iio/iio.h>
#include <linux/iio/buffer.h>

struct iio_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev);
void iio_kfifo_free(struct iio_buffer *r);

#endif
Tue Jul 19 12:43:36 PDT 2016
Fri Jul 22 15:56:05 PDT 2016
Sun, Jul 24, 2016  3:28:56 PM
Mon, Jul 25, 2016 10:08:36 PM
