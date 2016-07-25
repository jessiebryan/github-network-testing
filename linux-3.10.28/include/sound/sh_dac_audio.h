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
Tue Jul 19 12:53:17 PDT 2016
Fri Jul 22 16:14:28 PDT 2016
Sun, Jul 24, 2016  5:48:58 PM
