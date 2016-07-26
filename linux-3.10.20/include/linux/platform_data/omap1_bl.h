#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:27 PDT 2016
Sun, Jul 24, 2016  4:33:58 PM
Mon, Jul 25, 2016 11:20:53 PM
