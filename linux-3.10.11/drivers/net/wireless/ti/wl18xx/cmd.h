/*
 * This file is part of wl18xx
 *
 * Copyright (C) 2011 Texas Instruments. All rights reserved.
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

#ifndef __WL18XX_CMD_H__
#define __WL18XX_CMD_H__

#include "../wlcore/wlcore.h"
#include "../wlcore/acx.h"

struct wl18xx_cmd_channel_switch {
	struct wl1271_cmd_header header;

	u8 role_id;

	/* The new serving channel */
	u8 channel;
	/* Relative time of the serving channel switch in TBTT units */
	u8 switch_time;
	/* Stop the role TX, should expect it after radar detection */
	u8 stop_tx;

	__le32 local_supported_rates;

	u8 channel_type;
	u8 band;

	u8 padding[2];
} __packed;

int wl18xx_cmd_channel_switch(struct wl1271 *wl,
			      struct wl12xx_vif *wlvif,
			      struct ieee80211_channel_switch *ch_switch);

#endif
Tue Jul 19 12:42:09 PDT 2016
Fri Jul 22 15:53:30 PDT 2016
Sun, Jul 24, 2016  3:08:49 PM
Mon, Jul 25, 2016  9:46:07 PM
