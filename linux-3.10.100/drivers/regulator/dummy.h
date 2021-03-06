/*
 * dummy.h
 *
 * Copyright 2010 Wolfson Microelectronics PLC.
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This is useful for systems with mixed controllable and
 * non-controllable regulators, as well as for allowing testing on
 * systems with no controllable regulators.
 */

#ifndef _DUMMY_H
#define _DUMMY_H

struct regulator_dev;

extern struct regulator_dev *dummy_regulator_rdev;

void __init regulator_dummy_init(void);

#endif
Tue Jul 19 12:40:05 PDT 2016
Fri Jul 22 15:49:43 PDT 2016
Sun, Jul 24, 2016  2:41:14 PM
Mon, Jul 25, 2016  9:14:58 PM
