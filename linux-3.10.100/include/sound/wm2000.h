/*
 * linux/sound/wm2000.h -- Platform data for WM2000
 *
 * Copyright 2010 Wolfson Microelectronics. PLC.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_SND_WM2000_H
#define __LINUX_SND_WM2000_H

struct wm2000_platform_data {
	/** Filename for system-specific image to download to device. */
	const char *download_file;

	/** Disable speech clarity enhancement, for use when an
	 * external algorithm is used. */
	unsigned int speech_enh_disable:1;
};

#endif
Tue Jul 19 12:40:16 PDT 2016
Fri Jul 22 15:50:05 PDT 2016
Sun, Jul 24, 2016  2:44:00 PM
Mon, Jul 25, 2016  9:18:04 PM
