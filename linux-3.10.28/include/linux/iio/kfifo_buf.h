#ifndef __LINUX_IIO_KFIFO_BUF_H__
#define __LINUX_IIO_KFIFO_BUF_H__

#include <linux/kfifo.h>
#include <linux/iio/iio.h>
#include <linux/iio/buffer.h>

struct iio_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev);
void iio_kfifo_free(struct iio_buffer *r);

#endif
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:19 PDT 2016
Sun, Jul 24, 2016  5:47:50 PM
Tue, Jul 26, 2016 12:42:34 AM
