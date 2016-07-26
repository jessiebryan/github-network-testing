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
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:56 PDT 2016
Sun, Jul 24, 2016  2:42:51 PM
Mon, Jul 25, 2016  9:16:45 PM
