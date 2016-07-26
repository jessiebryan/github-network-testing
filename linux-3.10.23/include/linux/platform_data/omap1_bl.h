#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:49:59 PDT 2016
Fri Jul 22 16:08:05 PDT 2016
Sun, Jul 24, 2016  5:01:41 PM
Mon, Jul 25, 2016 11:51:43 PM
