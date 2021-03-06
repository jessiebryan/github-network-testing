/*
 * PWM LED driver data - see drivers/leds/leds-pwm.c
 */
#ifndef __LINUX_LEDS_PWM_H
#define __LINUX_LEDS_PWM_H

struct led_pwm {
	const char	*name;
	const char	*default_trigger;
	unsigned	pwm_id __deprecated;
	u8 		active_low;
	unsigned 	max_brightness;
	unsigned	pwm_period_ns;
};

struct led_pwm_platform_data {
	int			num_leds;
	struct led_pwm	*leds;
};

#endif
Tue Jul 19 12:53:52 PDT 2016
Fri Jul 22 16:15:35 PDT 2016
Sun, Jul 24, 2016  5:57:15 PM
Tue, Jul 26, 2016 12:52:59 AM
