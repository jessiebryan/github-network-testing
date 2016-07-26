#ifndef _LINUX_IIO_TRIGGERED_BUFFER_H_
#define _LINUX_IIO_TRIGGERED_BUFFER_H_

#include <linux/interrupt.h>

struct iio_dev;
struct iio_buffer_setup_ops;

int iio_triggered_buffer_setup(struct iio_dev *indio_dev,
	irqreturn_t (*pollfunc_bh)(int irq, void *p),
	irqreturn_t (*pollfunc_th)(int irq, void *p),
	const struct iio_buffer_setup_ops *setup_ops);
void iio_triggered_buffer_cleanup(struct iio_dev *indio_dev);

#endif
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:15 PM
Mon, Jul 25, 2016 11:51:14 PM
