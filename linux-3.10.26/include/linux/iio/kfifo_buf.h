#ifndef __LINUX_IIO_KFIFO_BUF_H__
#define __LINUX_IIO_KFIFO_BUF_H__

#include <linux/kfifo.h>
#include <linux/iio/iio.h>
#include <linux/iio/buffer.h>

struct iio_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev);
void iio_kfifo_free(struct iio_buffer *r);

#endif
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:48 PDT 2016
Sun, Jul 24, 2016  5:29:12 PM
Tue, Jul 26, 2016 12:22:02 AM
