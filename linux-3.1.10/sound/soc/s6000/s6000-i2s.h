/*
 * ALSA SoC I2S Audio Layer for the Stretch s6000 family
 *
 * Author:      Daniel Gloeckner, <dg@emlix.com>
 * Copyright:   (C) 2009 emlix GmbH <info@emlix.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _S6000_I2S_H
#define _S6000_I2S_H

struct s6000_snd_platform_data {
	int lines_in;
	int lines_out;
	int channel_in;
	int channel_out;
	int wide;
	int same_rate;
};
#endif
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:34 PM
Mon, Jul 25, 2016  6:27:41 PM
Mon, Jul 25, 2016  7:40:48 PM
Tue, Jul 26, 2016  2:16:34 PM
