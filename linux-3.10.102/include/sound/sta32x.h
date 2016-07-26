/*
 * Platform data for ST STA32x ASoC codec driver.
 *
 * Copyright: 2011 Raumfeld GmbH
 * Author: Johannes Stezenbach <js@sig21.net>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */
#ifndef __LINUX_SND__STA32X_H
#define __LINUX_SND__STA32X_H

#define STA32X_OCFG_2CH		0
#define STA32X_OCFG_2_1CH	1
#define STA32X_OCFG_1CH		3

#define STA32X_OM_CH1		0
#define STA32X_OM_CH2		1
#define STA32X_OM_CH3		2

#define STA32X_THERMAL_ADJUSTMENT_ENABLE	1
#define STA32X_THERMAL_RECOVERY_ENABLE		2

struct sta32x_platform_data {
	int output_conf;
	int ch1_output_mapping;
	int ch2_output_mapping;
	int ch3_output_mapping;
	int thermal_conf;
	int needs_esd_watchdog;
};

#endif /* __LINUX_SND__STA32X_H */
Tue Jul 19 12:41:34 PDT 2016
Fri Jul 22 15:52:40 PDT 2016
Sun, Jul 24, 2016  3:02:25 PM
Mon, Jul 25, 2016  9:38:54 PM
