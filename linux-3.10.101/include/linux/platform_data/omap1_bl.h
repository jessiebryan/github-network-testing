#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:40:53 PDT 2016
Fri Jul 22 15:51:15 PDT 2016
Sun, Jul 24, 2016  2:52:31 PM
Mon, Jul 25, 2016  9:27:43 PM
