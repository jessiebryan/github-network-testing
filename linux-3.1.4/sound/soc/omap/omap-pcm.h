/*
 * omap-pcm.h
 *
 * Copyright (C) 2008 Nokia Corporation
 *
 * Contact: Jarkko Nikula <jarkko.nikula@bitmer.com>
 *          Peter Ujfalusi <peter.ujfalusi@ti.com>
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

#ifndef __OMAP_PCM_H__
#define __OMAP_PCM_H__

struct omap_pcm_dma_data {
	char		*name;		/* stream identifier */
	int		dma_req;	/* DMA request line */
	unsigned long	port_addr;	/* transmit/receive register */
	void (*set_threshold)(struct snd_pcm_substream *substream);
	int		data_type;	/* data type 8,16,32 */
	int		sync_mode;	/* DMA sync mode */
	int		packet_size;	/* packet size only in PACKET mode */
};

#endif
Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:20 PM
Mon, Jul 25, 2016  8:09:57 PM
Tue, Jul 26, 2016  2:43:58 PM
