/*
 * leds-bd2802.h - RGB LED Driver
 *
 * Copyright (C) 2009 Samsung Electronics
 * Kim Kyuwon <q1.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Datasheet: http://www.rohm.com/products/databook/driver/pdf/bd2802gu-e.pdf
 *
 */
#ifndef _LEDS_BD2802_H_
#define _LEDS_BD2802_H_

struct bd2802_led_platform_data{
	int	reset_gpio;
	u8	rgb_time;
};

#define RGB_TIME(slopedown, slopeup, waveform) \
	((slopedown) << 6 | (slopeup) << 4 | (waveform))

#endif /* _LEDS_BD2802_H_ */

Tue Jul 19 12:44:15 PDT 2016
Fri Jul 22 15:57:18 PDT 2016
Sun, Jul 24, 2016  3:38:15 PM
Mon, Jul 25, 2016 10:18:58 PM
