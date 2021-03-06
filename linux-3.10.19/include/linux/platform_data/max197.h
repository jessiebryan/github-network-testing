/*
 * Maxim MAX197 A/D Converter Driver
 *
 * Copyright (c) 2012 Savoir-faire Linux Inc.
 *          Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * For further information, see the Documentation/hwmon/max197 file.
 */

/**
 * struct max197_platform_data - MAX197 connectivity info
 * @convert:	Function used to start a conversion with control byte ctrl.
 *		It must return the raw data, or a negative error code.
 */
struct max197_platform_data {
	int (*convert)(u8 ctrl);
};
Tue Jul 19 12:47:25 PDT 2016
Fri Jul 22 16:03:15 PDT 2016
Sun, Jul 24, 2016  4:24:43 PM
Mon, Jul 25, 2016 11:10:36 PM
