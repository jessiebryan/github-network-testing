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
Tue Jul 19 12:43:31 PDT 2016
Fri Jul 22 15:55:55 PDT 2016
Sun, Jul 24, 2016  3:27:41 PM
Mon, Jul 25, 2016 10:07:11 PM
