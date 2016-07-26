#ifndef _NET_AH_H
#define _NET_AH_H

#include <linux/skbuff.h>

/* This is the maximum truncated ICV length that we know of. */
#define MAX_AH_AUTH_LEN	64

struct crypto_ahash;

struct ah_data {
	int			icv_full_len;
	int			icv_trunc_len;

	struct crypto_ahash	*ahash;
};

struct ip_auth_hdr;

static inline struct ip_auth_hdr *ip_auth_hdr(const struct sk_buff *skb)
{
	return (struct ip_auth_hdr *)skb_transport_header(skb);
}

#endif
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:54 PM
Mon, Jul 25, 2016  6:26:52 PM
Mon, Jul 25, 2016  7:40:00 PM
Tue, Jul 26, 2016  2:15:49 PM
