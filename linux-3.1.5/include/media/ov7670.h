/*
 * A V4L2 driver for OmniVision OV7670 cameras.
 *
 * Copyright 2010 One Laptop Per Child
 *
 * This file may be distributed under the terms of the GNU General
 * Public License, version 2.
 */

#ifndef __OV7670_H
#define __OV7670_H

struct ov7670_config {
	int min_width;			/* Filter out smaller sizes */
	int min_height;			/* Filter out smaller sizes */
	int clock_speed;		/* External clock speed (MHz) */
	bool use_smbus;			/* Use smbus I/O instead of I2C */
};

#endif
Tue Jul 19 12:36:33 PDT 2016
Fri Jul 22 15:42:55 PDT 2016
Sun, Jul 24, 2016  1:51:52 PM
Mon, Jul 25, 2016  8:18:49 PM
