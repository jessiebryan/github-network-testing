/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * License Terms: GNU General Public License v2
 *
 * Author: Bengt Jonsson <bengt.g.jonsson@stericsson.com> for ST-Ericsson
 *
 * MOP500 board specific initialization for regulators
 */

#ifndef __BOARD_MOP500_REGULATORS_H
#define __BOARD_MOP500_REGULATORS_H

#include <linux/regulator/machine.h>
#include <linux/regulator/ab8500.h>

extern struct ab8500_regulator_reg_init
ab8500_regulator_reg_init[AB8500_NUM_REGULATOR_REGISTERS];
extern struct regulator_init_data ab8500_regulators[AB8500_NUM_REGULATORS];
extern struct regulator_init_data tps61052_regulator;

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:19 PM
Mon, Jul 25, 2016  6:18:59 PM
Mon, Jul 25, 2016  7:32:16 PM
Tue, Jul 26, 2016  2:08:29 PM
