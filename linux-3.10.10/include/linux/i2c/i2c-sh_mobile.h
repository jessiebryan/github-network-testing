#ifndef __I2C_SH_MOBILE_H__
#define __I2C_SH_MOBILE_H__

#include <linux/platform_device.h>

struct i2c_sh_mobile_platform_data {
	unsigned long bus_speed;
	unsigned int clks_per_count;
};

#endif /* __I2C_SH_MOBILE_H__ */
Tue Jul 19 12:39:33 PDT 2016
Fri Jul 22 15:48:40 PDT 2016
