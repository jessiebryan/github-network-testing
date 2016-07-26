#ifndef _X25DEVICE_H
#define _X25DEVICE_H

#include <linux/if_ether.h>
#include <linux/if_packet.h>
#include <linux/if_x25.h>
#include <linux/skbuff.h>

static inline __be16 x25_type_trans(struct sk_buff *skb, struct net_device *dev)
{
	skb->dev = dev;
	skb_reset_mac_header(skb);
	skb->pkt_type = PACKET_HOST;
	
	return htons(ETH_P_X25);
}
#endif
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:18 PM
Mon, Jul 25, 2016  6:36:57 PM
Mon, Jul 25, 2016  7:49:52 PM
Tue, Jul 26, 2016  2:25:09 PM
