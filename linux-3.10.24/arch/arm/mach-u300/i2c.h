/*
 * arch/arm/mach-u300/i2c.h
 *
 * Copyright (C) 2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 *
 * Register board i2c devices
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 */

#ifndef MACH_U300_I2C_H
#define MACH_U300_I2C_H

#ifdef CONFIG_I2C_STU300
void __init u300_i2c_register_board_devices(void);
#else
/* Compile out this stuff if no I2C adapter is available */
static inline void __init u300_i2c_register_board_devices(void)
{
}
#endif

#endif
Tue Jul 19 12:50:10 PDT 2016
Fri Jul 22 16:08:25 PDT 2016
Sun, Jul 24, 2016  5:04:14 PM
Mon, Jul 25, 2016 11:54:27 PM
