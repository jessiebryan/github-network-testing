/*
 * Generic PWM backlight driver data - see drivers/video/backlight/pwm_bl.c
 */
#ifndef __LINUX_PWM_BACKLIGHT_H
#define __LINUX_PWM_BACKLIGHT_H

#include <linux/backlight.h>

struct platform_pwm_backlight_data {
	int pwm_id;
	unsigned int max_brightness;
	unsigned int dft_brightness;
	unsigned int lth_brightness;
	unsigned int pwm_period_ns;
	int (*init)(struct device *dev);
	int (*notify)(struct device *dev, int brightness);
	void (*notify_after)(struct device *dev, int brightness);
	void (*exit)(struct device *dev);
	int (*check_fb)(struct device *dev, struct fb_info *info);
};

#endif
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:29 PDT 2016
Sun, Jul 24, 2016  1:26:49 PM
Mon, Jul 25, 2016  6:36:22 PM
Mon, Jul 25, 2016  7:49:18 PM
Tue, Jul 26, 2016  2:24:37 PM
