/*
 * Michael MIC implementation - optimized for TKIP MIC operations
 * Copyright 2002-2003, Instant802 Networks, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef MICHAEL_H
#define MICHAEL_H

#include <linux/types.h>

#define MICHAEL_MIC_LEN 8

struct michael_mic_ctx {
	u32 l, r;
};

void michael_mic(const u8 *key, struct ieee80211_hdr *hdr,
		 const u8 *data, size_t data_len, u8 *mic);

#endif /* MICHAEL_H */
Tue Jul 19 12:40:19 PDT 2016
Fri Jul 22 15:50:09 PDT 2016
Sun, Jul 24, 2016  2:44:34 PM
Mon, Jul 25, 2016  9:18:43 PM
