#ifndef __EMU10K1_SYNTH_H
#define __EMU10K1_SYNTH_H
/*
 *  Defines for the Emu10k1 WaveTable synth
 *
 *  Copyright (C) 2000 Takashi Iwai <tiwai@suse.de>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#include "emu10k1.h"
#include "emux_synth.h"

/* sequencer device id */
#define SNDRV_SEQ_DEV_ID_EMU10K1_SYNTH	"emu10k1-synth"

/* argument for snd_seq_device_new */
struct snd_emu10k1_synth_arg {
	struct snd_emu10k1 *hwptr;	/* chip */
	int index;		/* sequencer client index */
	int seq_ports;		/* number of sequencer ports to be created */
	int max_voices;		/* maximum number of voices for wavetable */
};

#define EMU10K1_MAX_MEMSIZE	(32 * 1024 * 1024) /* 32MB */

#endif
Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:22 PM
Mon, Jul 25, 2016  6:37:02 PM
Mon, Jul 25, 2016  7:49:56 PM
Tue, Jul 26, 2016  2:25:14 PM
