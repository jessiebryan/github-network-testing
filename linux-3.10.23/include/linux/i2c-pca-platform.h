#ifndef I2C_PCA9564_PLATFORM_H
#define I2C_PCA9564_PLATFORM_H

struct i2c_pca9564_pf_platform_data {
	int gpio;		/* pin to reset chip. driver will work when
				 * not supplied (negative value), but it
				 * cannot exit some error conditions then */
	int i2c_clock_speed;	/* values are defined in linux/i2c-algo-pca.h */
	int timeout;		/* timeout in jiffies */
};

#endif /* I2C_PCA9564_PLATFORM_H */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:13 PM
