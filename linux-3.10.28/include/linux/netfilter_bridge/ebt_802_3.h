#ifndef __LINUX_BRIDGE_EBT_802_3_H
#define __LINUX_BRIDGE_EBT_802_3_H

#include <linux/skbuff.h>
#include <uapi/linux/netfilter_bridge/ebt_802_3.h>

static inline struct ebt_802_3_hdr *ebt_802_3_hdr(const struct sk_buff *skb)
{
	return (struct ebt_802_3_hdr *)skb_mac_header(skb);
}
#endif
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:21 PDT 2016
Sun, Jul 24, 2016  5:48:08 PM
Tue, Jul 26, 2016 12:42:53 AM
