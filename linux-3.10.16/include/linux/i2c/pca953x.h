#ifndef _LINUX_PCA953X_H
#define _LINUX_PCA953X_H

#include <linux/types.h>
#include <linux/i2c.h>

/* platform data for the PCA9539 16-bit I/O expander driver */

struct pca953x_platform_data {
	/* number of the first GPIO */
	unsigned	gpio_base;

	/* initial polarity inversion setting */
	u32		invert;

	/* interrupt base */
	int		irq_base;

	void		*context;	/* param to setup/teardown */

	int		(*setup)(struct i2c_client *client,
				unsigned gpio, unsigned ngpio,
				void *context);
	int		(*teardown)(struct i2c_client *client,
				unsigned gpio, unsigned ngpio,
				void *context);
	const char	*const *names;
};

#endif /* _LINUX_PCA953X_H */
Tue Jul 19 12:45:30 PDT 2016
Fri Jul 22 15:59:38 PDT 2016
Sun, Jul 24, 2016  3:56:35 PM
Mon, Jul 25, 2016 10:39:20 PM
