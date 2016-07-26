/*
 * omap-hdmi.h
 *
 * Definitions for OMAP ALSA SoC DAI driver for HDMI audio on OMAP4 processors.
 * Copyright (C) 2010-2011 Texas Instruments Incorporated - http://www.ti.com/
 * Authors: Jorge Candelaria <jorge.candelaria@ti.com>
 *          Ricardo Neri <ricardo.neri@ti.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __OMAP_HDMI_H__
#define __OMAP_HDMI_H__

#define OMAP_HDMI_AUDIO_DMA_PORT 0x8c

#define OMAP_HDMI_RATES	(SNDRV_PCM_RATE_32000 | \
				SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 | \
				SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000 | \
				SNDRV_PCM_RATE_176400 | SNDRV_PCM_RATE_192000)

#define OMAP_HDMI_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | \
				SNDRV_PCM_FMTBIT_S24_LE)

#endif
Tue Jul 19 12:43:44 PDT 2016
Fri Jul 22 15:56:20 PDT 2016
Sun, Jul 24, 2016  3:30:56 PM
Mon, Jul 25, 2016 10:10:50 PM
