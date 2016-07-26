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

extern struct ab8500_regulator_platform_data ab8500_regulator_plat_data;
extern struct ab8500_regulator_platform_data ab8505_regulator_plat_data;
extern struct regulator_init_data tps61052_regulator;
extern struct regulator_init_data gpio_en_3v3_regulator;
extern struct regulator_init_data sdi0_reg_init_data;

void mop500_regulator_init(void);

#endif
Tue Jul 19 12:52:06 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:08 PM
Tue, Jul 26, 2016 12:25:17 AM
