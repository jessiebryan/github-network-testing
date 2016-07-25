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
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:40 PM
