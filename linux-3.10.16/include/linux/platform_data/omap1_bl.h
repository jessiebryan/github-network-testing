#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:42 PDT 2016
Sun, Jul 24, 2016  3:57:04 PM
Mon, Jul 25, 2016 10:39:52 PM
