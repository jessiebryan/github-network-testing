#ifndef __SUNRPC_NETNS_H__
#define __SUNRPC_NETNS_H__

#include <net/net_namespace.h>
#include <net/netns/generic.h>

struct cache_detail;

struct sunrpc_net {
	struct proc_dir_entry *proc_net_rpc;
	struct cache_detail *ip_map_cache;
};

extern int sunrpc_net_id;

int ip_map_cache_create(struct net *);
void ip_map_cache_destroy(struct net *);

#endif
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:44 PDT 2016
Sun, Jul 24, 2016  1:35:51 PM
Mon, Jul 25, 2016  7:59:56 PM
Tue, Jul 26, 2016  2:34:35 PM
