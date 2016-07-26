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
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:05 PDT 2016
Sun, Jul 24, 2016  4:15:36 PM
Mon, Jul 25, 2016 11:00:30 PM
