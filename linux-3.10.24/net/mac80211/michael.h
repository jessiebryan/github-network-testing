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
Tue Jul 19 12:50:44 PDT 2016
Fri Jul 22 16:09:28 PDT 2016
Sun, Jul 24, 2016  5:12:18 PM
Tue, Jul 26, 2016 12:03:22 AM
