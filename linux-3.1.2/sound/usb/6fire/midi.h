/*
 * Linux driver for TerraTec DMX 6Fire USB
 *
 * Author:	Torsten Schenk <torsten.schenk@zoho.com>
 * Created:	Jan 01, 2011
 * Version:	0.3.0
 * Copyright:	(C) Torsten Schenk
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef USB6FIRE_MIDI_H
#define USB6FIRE_MIDI_H

#include "common.h"

enum {
	MIDI_BUFSIZE = 64
};

struct midi_runtime {
	struct sfire_chip *chip;
	struct snd_rawmidi *instance;

	struct snd_rawmidi_substream *in;
	char in_active;

	spinlock_t in_lock;
	spinlock_t out_lock;
	struct snd_rawmidi_substream *out;
	struct urb out_urb;
	u8 out_serial; /* serial number of out packet */
	u8 out_buffer[MIDI_BUFSIZE];
	int buffer_offset;

	void (*in_received)(struct midi_runtime *rt, u8 *data, int length);
};

int __devinit usb6fire_midi_init(struct sfire_chip *chip);
void usb6fire_midi_abort(struct sfire_chip *chip);
void usb6fire_midi_destroy(struct sfire_chip *chip);
#endif /* USB6FIRE_MIDI_H */

Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:51 PM
Mon, Jul 25, 2016  6:37:36 PM
Mon, Jul 25, 2016  7:50:30 PM
Tue, Jul 26, 2016  2:25:45 PM
