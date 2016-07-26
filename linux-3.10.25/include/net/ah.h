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
Tue Jul 19 12:51:19 PDT 2016
Fri Jul 22 16:10:37 PDT 2016
Sun, Jul 24, 2016  5:20:46 PM
Tue, Jul 26, 2016 12:12:44 AM
