#ifndef __LINUX_I2C_MAX732X_H
#define __LINUX_I2C_MAX732X_H

/* platform data for the MAX732x 8/16-bit I/O expander driver */

struct max732x_platform_data {
	/* number of the first GPIO */
	unsigned	gpio_base;

	/* interrupt base */
	int		irq_base;

	void		*context;	/* param to setup/teardown */

	int		(*setup)(struct i2c_client *client,
				unsigned gpio, unsigned ngpio,
				void *context);
	int		(*teardown)(struct i2c_client *client,
				unsigned gpio, unsigned ngpio,
				void *context);
};
#endif /* __LINUX_I2C_MAX732X_H */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:12 PM
Mon, Jul 25, 2016 11:51:11 PM
