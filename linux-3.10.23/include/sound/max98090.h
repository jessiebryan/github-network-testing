/*
 * Platform data for MAX98090
 *
 * Copyright 2011-2012 Maxim Integrated Products
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __SOUND_MAX98090_PDATA_H__
#define __SOUND_MAX98090_PDATA_H__

/* codec platform data */
struct max98090_pdata {

	/* Analog/digital microphone configuration:
	 * 0 = analog microphone input (normal setting)
	 * 1 = digital microphone input
	 */
	unsigned int digmic_left_mode:1;
	unsigned int digmic_right_mode:1;
	unsigned int digmic_3_mode:1;
	unsigned int digmic_4_mode:1;
};

#endif
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:10 PDT 2016
Sun, Jul 24, 2016  5:02:22 PM
Mon, Jul 25, 2016 11:52:26 PM
