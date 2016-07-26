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
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:29 PDT 2016
Sun, Jul 24, 2016  1:26:52 PM
Mon, Jul 25, 2016  6:36:25 PM
Mon, Jul 25, 2016  7:49:21 PM
Tue, Jul 26, 2016  2:24:40 PM
