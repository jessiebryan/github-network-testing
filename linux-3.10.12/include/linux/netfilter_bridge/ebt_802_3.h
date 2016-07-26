#ifndef __LINUX_BRIDGE_EBT_802_3_H
#define __LINUX_BRIDGE_EBT_802_3_H

#include <linux/skbuff.h>
#include <uapi/linux/netfilter_bridge/ebt_802_3.h>

static inline struct ebt_802_3_hdr *ebt_802_3_hdr(const struct sk_buff *skb)
{
	return (struct ebt_802_3_hdr *)skb_mac_header(skb);
}
#endif
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:56 PDT 2016
Sun, Jul 24, 2016  3:20:01 PM
Mon, Jul 25, 2016  9:58:41 PM
