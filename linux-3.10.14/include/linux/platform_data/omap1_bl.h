#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:44:17 PDT 2016
Fri Jul 22 15:57:21 PDT 2016
Sun, Jul 24, 2016  3:38:36 PM
