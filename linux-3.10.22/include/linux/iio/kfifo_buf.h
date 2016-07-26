#ifndef __LINUX_IIO_KFIFO_BUF_H__
#define __LINUX_IIO_KFIFO_BUF_H__

#include <linux/kfifo.h>
#include <linux/iio/iio.h>
#include <linux/iio/buffer.h>

struct iio_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev);
void iio_kfifo_free(struct iio_buffer *r);

#endif
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:49 PDT 2016
Sun, Jul 24, 2016  4:51:58 PM
Mon, Jul 25, 2016 11:40:58 PM
