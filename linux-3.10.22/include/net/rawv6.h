#ifndef _NET_RAWV6_H
#define _NET_RAWV6_H

#include <net/protocol.h>

void raw6_icmp_error(struct sk_buff *, int nexthdr,
		u8 type, u8 code, int inner_offset, __be32);
bool raw6_local_deliver(struct sk_buff *, int);

extern int			rawv6_rcv(struct sock *sk,
					  struct sk_buff *skb);

#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
int rawv6_mh_filter_register(int (*filter)(struct sock *sock,
					   struct sk_buff *skb));
int rawv6_mh_filter_unregister(int (*filter)(struct sock *sock,
					     struct sk_buff *skb));
#endif

#endif
Tue Jul 19 12:49:24 PDT 2016
Fri Jul 22 16:06:56 PDT 2016
Sun, Jul 24, 2016  4:52:58 PM
Mon, Jul 25, 2016 11:42:05 PM
