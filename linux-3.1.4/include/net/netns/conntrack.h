#ifndef __NETNS_CONNTRACK_H
#define __NETNS_CONNTRACK_H

#include <linux/list.h>
#include <linux/list_nulls.h>
#include <linux/atomic.h>

struct ctl_table_header;
struct nf_conntrack_ecache;

struct netns_ct {
	atomic_t		count;
	unsigned int		expect_count;
	unsigned int		htable_size;
	struct kmem_cache	*nf_conntrack_cachep;
	struct hlist_nulls_head	*hash;
	struct hlist_head	*expect_hash;
	struct hlist_nulls_head	unconfirmed;
	struct hlist_nulls_head	dying;
	struct ip_conntrack_stat __percpu *stat;
	int			sysctl_events;
	unsigned int		sysctl_events_retry_timeout;
	int			sysctl_acct;
	int			sysctl_tstamp;
	int			sysctl_checksum;
	unsigned int		sysctl_log_invalid; /* Log invalid packets */
#ifdef CONFIG_SYSCTL
	struct ctl_table_header	*sysctl_header;
	struct ctl_table_header	*acct_sysctl_header;
	struct ctl_table_header	*tstamp_sysctl_header;
	struct ctl_table_header	*event_sysctl_header;
#endif
	char			*slabname;
};
#endif
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:46 PM
Mon, Jul 25, 2016  8:09:16 PM
Tue, Jul 26, 2016  2:43:21 PM
