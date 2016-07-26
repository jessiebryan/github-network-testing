#ifndef __OMAP1_BL_H__
#define __OMAP1_BL_H__

#include <linux/device.h>

struct omap_backlight_config {
	int default_intensity;
	int (*set_power)(struct device *dev, int state);
};

#endif
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:06 PDT 2016
Sun, Jul 24, 2016  5:38:58 PM
Tue, Jul 26, 2016 12:32:48 AM
