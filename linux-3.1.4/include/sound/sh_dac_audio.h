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
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:49 PDT 2016
Sun, Jul 24, 2016  1:43:54 PM
Mon, Jul 25, 2016  8:09:26 PM
Tue, Jul 26, 2016  2:43:30 PM
