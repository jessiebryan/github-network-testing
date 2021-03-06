/*
 * SH_DAC specific configuration, for the dac_audio platform_device
 *
 * Copyright (C) 2009 Rafael Ignacio Zurita <rizurita@yahoo.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */

#ifndef __INCLUDE_SH_DAC_AUDIO_H
#define __INCLUDE_SH_DAC_AUDIO_H

struct dac_audio_pdata {
	int buffer_size;
	int channel;
	void (*start)(struct dac_audio_pdata *pd);
	void (*stop)(struct dac_audio_pdata *pd);
};

#endif /* __INCLUDE_SH_DAC_AUDIO_H */
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:29 PDT 2016
Sun, Jul 24, 2016  1:19:08 PM
Mon, Jul 25, 2016  6:27:09 PM
Mon, Jul 25, 2016  7:40:17 PM
Tue, Jul 26, 2016  2:16:05 PM
