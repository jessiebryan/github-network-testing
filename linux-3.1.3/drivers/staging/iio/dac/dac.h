/*
 * dac.h - sysfs attributes associated with DACs
 */

#define IIO_DEV_ATTR_OUT_RAW(_num, _store, _addr)				\
	IIO_DEVICE_ATTR(out##_num##_raw, S_IWUSR, NULL, _store, _addr)
Tue Jul 19 12:35:17 PDT 2016
