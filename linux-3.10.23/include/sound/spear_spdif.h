/*
 * Copyright (ST) 2012 Vipin Kumar (vipin.kumar@st.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef __SOUND_SPDIF_H
#define __SOUND_SPDIF_H

struct spear_spdif_platform_data {
	/* DMA params */
	void *dma_params;
	bool (*filter)(struct dma_chan *chan, void *slave);
	void (*reset_perip)(void);
};

#endif /* SOUND_SPDIF_H */
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:10 PDT 2016
Sun, Jul 24, 2016  5:02:23 PM
Mon, Jul 25, 2016 11:52:28 PM
