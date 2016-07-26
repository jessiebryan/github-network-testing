#ifndef _GP2AP002A00F_H_
#define _GP2AP002A00F_H_

#include <linux/i2c.h>

#define GP2A_I2C_NAME "gp2ap002a00f"

/**
 * struct gp2a_platform_data - Sharp gp2ap002a00f proximity platform data
 * @vout_gpio: The gpio connected to the object detected pin (VOUT)
 * @wakeup: Set to true if the proximity can wake the device from suspend
 * @hw_setup: Callback for setting up hardware such as gpios and vregs
 * @hw_shutdown: Callback for properly shutting down hardware
 */
struct gp2a_platform_data {
	int vout_gpio;
	bool wakeup;
	int (*hw_setup)(struct i2c_client *client);
	int (*hw_shutdown)(struct i2c_client *client);
};

#endif
Tue Jul 19 12:46:07 PDT 2016
Fri Jul 22 16:00:49 PDT 2016
Sun, Jul 24, 2016  4:05:52 PM
Mon, Jul 25, 2016 10:49:39 PM
