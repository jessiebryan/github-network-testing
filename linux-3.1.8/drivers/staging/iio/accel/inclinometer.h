/*
 * Inclinometer related attributes
 */
#include "../sysfs.h"

#define IIO_DEV_ATTR_INCLI_X(_show, _addr)			\
	IIO_DEVICE_ATTR(incli_x_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_INCLI_Y(_show, _addr)			\
	IIO_DEVICE_ATTR(incli_y_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_INCLI_Z(_show, _addr)			\
	IIO_DEVICE_ATTR(incli_z_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_INCLI_X_OFFSET(_mode, _show, _store, _addr) \
	IIO_DEVICE_ATTR(incli_x_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_INCLI_Y_OFFSET(_mode, _show, _store, _addr) \
	IIO_DEVICE_ATTR(incli_y_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_INCLI_Z_OFFSET(_mode, _show, _store, _addr) \
	IIO_DEVICE_ATTR(incli_z_offset, _mode, _show, _store, _addr)

#define IIO_CONST_ATTR_INCLI_SCALE(_string) \
	IIO_CONST_ATTR(incli_scale, _string)
Tue Jul 19 12:37:35 PDT 2016
Fri Jul 22 15:44:53 PDT 2016
Sun, Jul 24, 2016  2:06:23 PM
Mon, Jul 25, 2016  8:36:07 PM
