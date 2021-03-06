#ifndef _NET_FLOW_KEYS_H
#define _NET_FLOW_KEYS_H

struct flow_keys {
	/* (src,dst) must be grouped, in the same way than in IP header */
	__be32 src;
	__be32 dst;
	union {
		__be32 ports;
		__be16 port16[2];
	};
	u16 thoff;
	u8 ip_proto;
};

extern bool skb_flow_dissect(const struct sk_buff *skb, struct flow_keys *flow);
#endif
Tue Jul 19 12:51:58 PDT 2016
Fri Jul 22 16:11:55 PDT 2016
Sun, Jul 24, 2016  5:30:07 PM
Tue, Jul 26, 2016 12:23:03 AM
