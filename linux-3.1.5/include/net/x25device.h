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
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:57 PDT 2016
Sun, Jul 24, 2016  1:52:02 PM
Mon, Jul 25, 2016  8:19:02 PM
