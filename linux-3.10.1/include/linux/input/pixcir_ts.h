#ifndef	_PIXCIR_I2C_TS_H
#define	_PIXCIR_I2C_TS_H

struct pixcir_ts_platform_data {
	int (*attb_read_val)(void);
	int x_max;
	int y_max;
};

#endif
Tue Jul 19 12:38:55 PDT 2016
Fri Jul 22 15:47:23 PDT 2016
Sun, Jul 24, 2016  2:24:29 PM
