
#include "../sysfs.h"

/* Accelerometer types of attribute */
#define IIO_DEV_ATTR_ACCEL_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(accel_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_X_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(accel_x_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Y_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(accel_y_offset, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Z_OFFSET(_mode, _show, _store, _addr)	\
	IIO_DEVICE_ATTR(accel_z_offset, _mode, _show, _store, _addr)

#define IIO_CONST_ATTR_ACCEL_SCALE(_string)		\
	IIO_CONST_ATTR(accel_scale, _string)

#define IIO_DEV_ATTR_ACCEL_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_X_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_x_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Y_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_y_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Z_SCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_z_scale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_CALIBBIAS(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_calibbias, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_X_CALIBBIAS(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_x_calibbias, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Y_CALIBBIAS(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_y_calibbias, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Z_CALIBBIAS(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_z_calibbias, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_CALIBSCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_calibscale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_X_CALIBSCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_x_calibscale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Y_CALIBSCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_y_calibscale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL_Z_CALIBSCALE(_mode, _show, _store, _addr)		\
	IIO_DEVICE_ATTR(accel_z_calibscale, _mode, _show, _store, _addr)

#define IIO_DEV_ATTR_ACCEL(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_X(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_x_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_Y(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_y_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_Z(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_z_raw, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_XY(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_xy, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_PEAK(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_peak, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_XPEAK(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_xpeak, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_YPEAK(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_ypeak, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_ZPEAK(_show, _addr)			\
	IIO_DEVICE_ATTR(accel_zpeak, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_XYPEAK(_show, _addr)		\
	IIO_DEVICE_ATTR(accel_xypeak, S_IRUGO, _show, NULL, _addr)

#define IIO_DEV_ATTR_ACCEL_XYZPEAK(_show, _addr)		\
	IIO_DEVICE_ATTR(accel_xyzpeak, S_IRUGO, _show, NULL, _addr)
Tue Jul 19 12:36:59 PDT 2016
Fri Jul 22 15:43:45 PDT 2016
Sun, Jul 24, 2016  1:58:07 PM
Mon, Jul 25, 2016  8:26:15 PM
