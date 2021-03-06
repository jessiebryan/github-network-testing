#ifndef __ROTARY_ENCODER_H__
#define __ROTARY_ENCODER_H__

struct rotary_encoder_platform_data {
	unsigned int steps;
	unsigned int axis;
	unsigned int gpio_a;
	unsigned int gpio_b;
	unsigned int inverted_a;
	unsigned int inverted_b;
	bool relative_axis;
	bool rollover;
	bool half_period;
};

#endif /* __ROTARY_ENCODER_H__ */
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:43 PDT 2016
Sun, Jul 24, 2016  3:57:11 PM
Mon, Jul 25, 2016 10:39:59 PM
