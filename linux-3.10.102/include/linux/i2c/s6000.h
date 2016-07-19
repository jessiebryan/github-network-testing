#ifndef __LINUX_I2C_S6000_H
#define __LINUX_I2C_S6000_H

struct s6_i2c_platform_data {
	const char *clock; /* the clock to use */
	int bus_num; /* the bus number to register */
};

#endif

Tue Jul 19 12:41:29 PDT 2016
