#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:57 PDT 2016
Sun, Jul 24, 2016  3:20:09 PM
Mon, Jul 25, 2016  9:58:51 PM
