/*
 * Copyright 2004, Instant802 Networks, Inc.
 * Copyright 2005, Devicescape Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WME_H
#define _WME_H

#include <linux/netdevice.h>
#include "ieee80211_i.h"

extern const int ieee802_1d_to_ac[8];

u16 ieee80211_select_queue(struct ieee80211_sub_if_data *sdata,
			   struct sk_buff *skb);
void ieee80211_set_qos_hdr(struct ieee80211_local *local, struct sk_buff *skb);
u16 ieee80211_downgrade_queue(struct ieee80211_local *local,
                              struct sk_buff *skb);


#endif /* _WME_H */
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:44 PDT 2016
Sun, Jul 24, 2016  1:35:50 PM
Mon, Jul 25, 2016  7:59:55 PM
Tue, Jul 26, 2016  2:34:34 PM
