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
Tue Jul 19 12:47:24 PDT 2016
Fri Jul 22 16:03:12 PDT 2016
Sun, Jul 24, 2016  4:24:16 PM
Mon, Jul 25, 2016 11:10:06 PM
