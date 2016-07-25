#ifndef	_PIXCIR_I2C_TS_H
#define	_PIXCIR_I2C_TS_H

struct pixcir_ts_platform_data {
	int (*attb_read_val)(void);
	int x_max;
	int y_max;
};

#endif
Tue Jul 19 12:46:07 PDT 2016
Fri Jul 22 16:00:49 PDT 2016
Sun, Jul 24, 2016  4:05:52 PM
