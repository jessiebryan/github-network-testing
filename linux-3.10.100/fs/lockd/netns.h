#ifndef __LOCKD_NETNS_H__
#define __LOCKD_NETNS_H__

#include <linux/fs.h>
#include <net/netns/generic.h>

struct lockd_net {
	unsigned int nlmsvc_users;
	unsigned long next_gc;
	unsigned long nrhosts;

	struct delayed_work grace_period_end;
	struct lock_manager lockd_manager;
	struct list_head grace_list;

	spinlock_t nsm_clnt_lock;
	unsigned int nsm_users;
	struct rpc_clnt *nsm_clnt;
	struct list_head nsm_handles;
};

extern int lockd_net_id;

#endif
Tue Jul 19 12:40:09 PDT 2016
Fri Jul 22 15:49:51 PDT 2016
Sun, Jul 24, 2016  2:42:16 PM
Mon, Jul 25, 2016  9:16:07 PM
