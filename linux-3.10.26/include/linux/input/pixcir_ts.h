#ifndef	_PIXCIR_I2C_TS_H
#define	_PIXCIR_I2C_TS_H

struct pixcir_ts_platform_data {
	int (*attb_read_val)(void);
	int x_max;
	int y_max;
};

#endif
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:48 PDT 2016
Sun, Jul 24, 2016  5:29:14 PM
Tue, Jul 26, 2016 12:22:03 AM
