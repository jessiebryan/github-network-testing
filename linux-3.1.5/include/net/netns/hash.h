#ifndef __NET_NS_HASH_H__
#define __NET_NS_HASH_H__

#include <asm/cache.h>

struct net;

static inline unsigned net_hash_mix(struct net *net)
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
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:56 PDT 2016
Sun, Jul 24, 2016  1:52:00 PM
Mon, Jul 25, 2016  8:18:59 PM
