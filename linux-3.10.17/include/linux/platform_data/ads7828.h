/*
 * TI ADS7828 A/D Converter platform data definition
 *
 * Copyright (c) 2012 Savoir-faire Linux Inc.
 *          Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 *
 * For further information, see the Documentation/hwmon/ads7828 file.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _PDATA_ADS7828_H
#define _PDATA_ADS7828_H

/**
 * struct ads7828_platform_data - optional ADS7828 connectivity info
 * @diff_input:		Differential input mode.
 * @ext_vref:		Use an external voltage reference.
 * @vref_mv:		Voltage reference value, if external.
 */
struct ads7828_platform_data {
	bool diff_input;
	bool ext_vref;
	unsigned int vref_mv;
};

#endif /* _PDATA_ADS7828_H */
Tue Jul 19 12:46:08 PDT 2016
Fri Jul 22 16:00:51 PDT 2016
Sun, Jul 24, 2016  4:06:13 PM
Mon, Jul 25, 2016 10:50:02 PM
