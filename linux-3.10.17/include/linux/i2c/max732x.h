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
Tue Jul 19 12:46:06 PDT 2016
Fri Jul 22 16:00:48 PDT 2016
Sun, Jul 24, 2016  4:05:48 PM
Mon, Jul 25, 2016 10:49:35 PM
