#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:46:47 PDT 2016
Fri Jul 22 16:02:04 PDT 2016
Sun, Jul 24, 2016  4:15:30 PM
Mon, Jul 25, 2016 11:00:23 PM
