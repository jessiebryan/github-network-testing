#ifndef __LEDS_RENESAS_TPU_H__
#define __LEDS_RENESAS_TPU_H__

struct led_renesas_tpu_config {
	char *name;
	unsigned pin_gpio_fn;
	unsigned pin_gpio;
	unsigned int channel_offset;
	unsigned int timer_bit;
	unsigned int max_brightness;
	unsigned int refresh_rate;
};

#endif /* __LEDS_RENESAS_TPU_H__ */
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:18 PDT 2016
Sun, Jul 24, 2016  5:11:00 PM
Tue, Jul 26, 2016 12:01:57 AM
