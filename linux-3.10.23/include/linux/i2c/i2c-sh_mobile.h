#ifndef __I2C_SH_MOBILE_H__
#define __I2C_SH_MOBILE_H__

#include <linux/platform_device.h>

struct i2c_sh_mobile_platform_data {
	unsigned long bus_speed;
	unsigned int clks_per_count;
};

#endif /* __I2C_SH_MOBILE_H__ */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
