/*
 * ALSA SoC TWL6040 codec driver
 *
 * Author:	Misael Lopez Cruz <x0052729@ti.com>
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

#ifndef __TWL6040_H__
#define __TWL6040_H__

void twl6040_hs_jack_detect(struct snd_soc_codec *codec,
			    struct snd_soc_jack *jack, int report);
int twl6040_get_clk_id(struct snd_soc_codec *codec);

#endif /* End of __TWL6040_H__ */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:45 PDT 2016
Sun, Jul 24, 2016  1:36:02 PM
Mon, Jul 25, 2016  8:00:10 PM
Tue, Jul 26, 2016  2:34:48 PM
