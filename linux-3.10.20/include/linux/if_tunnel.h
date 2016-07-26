#ifndef _IF_TUNNEL_H_
#define _IF_TUNNEL_H_

#include <linux/ip.h>
#include <linux/in6.h>
#include <uapi/linux/if_tunnel.h>
#include <linux/u64_stats_sync.h>

/*
 * Locking : hash tables are protected by RCU and RTNL
 */

#define for_each_ip_tunnel_rcu(pos, start) \
	for (pos = rcu_dereference(start); pos; pos = rcu_dereference(pos->next))

/* often modified stats are per cpu, other are shared (netdev->stats) */
struct pcpu_tstats {
	u64	rx_packets;
	u64	rx_bytes;
	u64	tx_packets;
	u64	tx_bytes;
	struct u64_stats_sync	syncp;
};

#endif /* _IF_TUNNEL_H_ */
Tue Jul 19 12:48:02 PDT 2016
Fri Jul 22 16:04:24 PDT 2016
Sun, Jul 24, 2016  4:33:31 PM
Mon, Jul 25, 2016 11:20:23 PM
