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
};

extern int lockd_net_id;

#endif
Tue Jul 19 12:48:38 PDT 2016
Fri Jul 22 16:05:31 PDT 2016
Sun, Jul 24, 2016  4:42:10 PM
Mon, Jul 25, 2016 11:29:59 PM
