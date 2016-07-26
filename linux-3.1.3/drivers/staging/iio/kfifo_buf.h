
#include <linux/kfifo.h>
#include "iio.h"
#include "ring_generic.h"

struct iio_kfifo {
	struct iio_ring_buffer ring;
	struct kfifo kf;
	int use_count;
	int update_needed;
	struct mutex use_lock;
};

extern const struct iio_ring_access_funcs kfifo_access_funcs;

struct iio_ring_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev);
void iio_kfifo_free(struct iio_ring_buffer *r);

Tue Jul 19 12:35:17 PDT 2016
Fri Jul 22 15:40:24 PDT 2016
Sun, Jul 24, 2016  1:33:25 PM
Mon, Jul 25, 2016  7:57:04 PM
Tue, Jul 26, 2016  2:31:55 PM
