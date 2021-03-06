#ifndef __NET_NS_HASH_H__
#define __NET_NS_HASH_H__

#include <asm/cache.h>

struct net;

static inline unsigned int net_hash_mix(struct net *net)
{
#ifdef CONFIG_NET_NS
	/*
	 * shift this right to eliminate bits, that are
	 * always zeroed
	 */

	return (unsigned)(((unsigned long)net) >> L1_CACHE_SHIFT);
#else
	return 0;
#endif
}
#endif
Tue Jul 19 12:47:28 PDT 2016
Fri Jul 22 16:03:19 PDT 2016
Sun, Jul 24, 2016  4:25:16 PM
Mon, Jul 25, 2016 11:11:13 PM
