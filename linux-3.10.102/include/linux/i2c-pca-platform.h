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
Tue Jul 19 12:41:29 PDT 2016
Fri Jul 22 15:52:31 PDT 2016
Sun, Jul 24, 2016  3:01:16 PM
Mon, Jul 25, 2016  9:37:36 PM
