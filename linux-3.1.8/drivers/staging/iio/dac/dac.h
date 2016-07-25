/*
 * dac.h - sysfs attributes associated with DACs
 */

#define IIO_DEV_ATTR_OUT_RAW(_num, _store, _addr)				\
	IIO_DEVICE_ATTR(out##_num##_raw, S_IWUSR, NULL, _store, _addr)
Tue Jul 19 12:37:35 PDT 2016
Fri Jul 22 15:44:53 PDT 2016
Sun, Jul 24, 2016  2:06:23 PM
