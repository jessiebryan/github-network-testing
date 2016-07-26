/*
 * dac.h - sysfs attributes associated with DACs
 */

#define IIO_DEV_ATTR_OUT_RAW(_num, _store, _addr)				\
	IIO_DEVICE_ATTR(out##_num##_raw, S_IWUSR, NULL, _store, _addr)
Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:16 PDT 2016
Sun, Jul 24, 2016  1:25:09 PM
Mon, Jul 25, 2016  6:34:22 PM
Mon, Jul 25, 2016  7:47:21 PM
Tue, Jul 26, 2016  2:22:47 PM
