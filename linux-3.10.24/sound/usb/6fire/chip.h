/*
 * Linux driver for TerraTec DMX 6Fire USB
 *
 * Author:	Torsten Schenk <torsten.schenk@zoho.com>
 * Created:	Jan 01, 2011
 * Copyright:	(C) Torsten Schenk
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#ifndef USB6FIRE_CHIP_H
#define USB6FIRE_CHIP_H

#include "common.h"

struct sfire_chip {
	struct usb_device *dev;
	struct snd_card *card;
	int intf_count; /* number of registered interfaces */
	int regidx; /* index in module parameter arrays */
	bool shutdown;

	struct midi_runtime *midi;
	struct pcm_runtime *pcm;
	struct control_runtime *control;
	struct comm_runtime *comm;
};
#endif /* USB6FIRE_CHIP_H */

Tue Jul 19 12:50:45 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:37 PM
Tue, Jul 26, 2016 12:03:43 AM
