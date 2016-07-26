/*
 * i2c.h - i.MX I2C driver header file
 *
 * Copyright (c) 2008, Darius Augulis <augulis.darius@gmail.com>
 *
 * This file is released under the GPLv2
 */

#ifndef __ASM_ARCH_I2C_H_
#define __ASM_ARCH_I2C_H_

/**
 * struct imxi2c_platform_data - structure of platform data for MXC I2C driver
 * @init:	Initialise gpio's and other board specific things
 * @exit:	Free everything initialised by @init
 * @bitrate:	Bus speed measured in Hz
 *
 **/
struct imxi2c_platform_data {
	int (*init)(struct device *dev);
	void (*exit)(struct device *dev);
	int bitrate;
};

#endif /* __ASM_ARCH_I2C_H_ */
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:38 PM
Mon, Jul 25, 2016  6:28:57 PM
