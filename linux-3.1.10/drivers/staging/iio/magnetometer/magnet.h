
#include "../sysfs.h"

/* Magnetometer types of attribute */

#define IIO_DEV_ATTR_MAGN_X_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(magn_x_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_Y_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(magn_y_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_Z_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(magn_z_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_X_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(magn_x_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_Y_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(magn_y_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_Z_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(magn_z_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_MAGN_X(_show, _addr)				\
	IIO_DEVICE_ATTR(magn_x_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_MAGN_Y(_show, _addr)				\
	IIO_DEVICE_ATTR(magn_y_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_MAGN_Z(_show, _addr)				\
	IIO_DEVICE_ATTR(magn_z_raw, S_IRUGO, _show, NULL, _addr)
Tue Jul 19 12:33:34 PDT 2016
Fri Jul 22 15:38:11 PDT 2016
Sun, Jul 24, 2016  1:16:54 PM
Mon, Jul 25, 2016  6:24:28 PM
Mon, Jul 25, 2016  7:37:39 PM
Tue, Jul 26, 2016  2:13:34 PM
