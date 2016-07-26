/*
 * ADIS16260 Programmable Digital Gyroscope Sensor Driver Platform Data
 *
 * Based on adis16255.h Matthia Brugger <m_brugger&web.de>
 *
 * Copyright (C) 2010 Fraunhofer Institute for Integrated Circuits
  *
 * Licensed under the GPL-2 or later.
 */

/**
 * struct adis16260_platform_data - instance specific data
 * @direction: x y or z
 * @negate: flag to indicate value should be inverted.
 **/
struct adis16260_platform_data {
	char direction;
	unsigned negate:1;
};
Tue Jul 19 12:35:17 PDT 2016
Fri Jul 22 15:40:24 PDT 2016
Sun, Jul 24, 2016  1:33:25 PM
Mon, Jul 25, 2016  7:57:03 PM
Tue, Jul 26, 2016  2:31:55 PM
