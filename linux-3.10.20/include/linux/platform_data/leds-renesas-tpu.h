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
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:27 PDT 2016
Sun, Jul 24, 2016  4:33:57 PM
Mon, Jul 25, 2016 11:20:51 PM
