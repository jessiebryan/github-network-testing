/*
 * DaVinci I2C controller platform_device info
 *
 * Author: Vladimir Barinov, MontaVista Software, Inc. <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
*/

#ifndef __ASM_ARCH_I2C_H
#define __ASM_ARCH_I2C_H

/* All frequencies are expressed in kHz */
struct davinci_i2c_platform_data {
	unsigned int	bus_freq;	/* standard bus frequency (kHz) */
	unsigned int	bus_delay;	/* post-transaction delay (usec) */
	unsigned int    sda_pin;        /* GPIO pin ID to use for SDA */
	unsigned int    scl_pin;        /* GPIO pin ID to use for SCL */
};

/* for board setup code */
void davinci_init_i2c(struct davinci_i2c_platform_data *);

#endif /* __ASM_ARCH_I2C_H */
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:13 PM
Mon, Jul 25, 2016  6:38:03 PM
Mon, Jul 25, 2016  7:50:56 PM
Tue, Jul 26, 2016  2:26:10 PM
