#ifndef _NET_RAWV6_H
#define _NET_RAWV6_H

#include <net/protocol.h>

void raw6_icmp_error(struct sk_buff *, int nexthdr,
		u8 type, u8 code, int inner_offset, __be32);
int raw6_local_deliver(struct sk_buff *, int);

extern int			rawv6_rcv(struct sock *sk,
					  struct sk_buff *skb);

#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
int rawv6_mh_filter_register(int (*filter)(struct sock *sock,
					   struct sk_buff *skb));
int rawv6_mh_filter_unregister(int (*filter)(struct sock *sock,
					     struct sk_buff *skb));
#endif

#endif
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:16 PM
Mon, Jul 25, 2016  6:36:55 PM
Mon, Jul 25, 2016  7:49:50 PM
Tue, Jul 26, 2016  2:25:08 PM
