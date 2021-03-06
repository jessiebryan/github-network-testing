/*
 * Analog Devices ADAU1373 Audio Codec drive
 *
 * Copyright 2011 Analog Devices Inc.
 * Author: Lars-Peter Clausen <lars@metafoo.de>
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __SOUND_ADAU1373_H__
#define __SOUND_ADAU1373_H__

enum adau1373_micbias_voltage {
	ADAU1373_MICBIAS_2_9V = 0,
	ADAU1373_MICBIAS_2_2V = 1,
	ADAU1373_MICBIAS_2_6V = 2,
	ADAU1373_MICBIAS_1_8V = 3,
};

#define ADAU1373_DRC_SIZE 13

struct adau1373_platform_data {
	bool input_differential[4];
	bool lineout_differential;
	bool lineout_ground_sense;

	unsigned int num_drc;
	uint8_t drc_setting[3][ADAU1373_DRC_SIZE];

	enum adau1373_micbias_voltage micbias1;
	enum adau1373_micbias_voltage micbias2;
};

#endif
Tue Jul 19 12:48:44 PDT 2016
Fri Jul 22 16:05:44 PDT 2016
Sun, Jul 24, 2016  4:43:50 PM
Mon, Jul 25, 2016 11:31:50 PM
