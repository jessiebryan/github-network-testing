/*
 * PWM LED driver data - see drivers/leds/leds-pwm.c
 */
#ifndef __LINUX_LEDS_PWM_H
#define __LINUX_LEDS_PWM_H

struct led_pwm {
	const char	*name;
	const char	*default_trigger;
	unsigned	pwm_id;
	u8 		active_low;
	unsigned 	max_brightness;
	unsigned	pwm_period_ns;
};

struct led_pwm_platform_data {
	int			num_leds;
	struct led_pwm	*leds;
};

#endif
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:26 PDT 2016
Sun, Jul 24, 2016  1:26:30 PM
Mon, Jul 25, 2016  6:35:59 PM
Mon, Jul 25, 2016  7:48:55 PM
