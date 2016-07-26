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
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:09 PDT 2016
Sun, Jul 24, 2016  5:02:14 PM
Mon, Jul 25, 2016 11:52:18 PM
