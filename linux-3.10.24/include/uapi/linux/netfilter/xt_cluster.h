#ifndef _XT_CLUSTER_MATCH_H
#define _XT_CLUSTER_MATCH_H

#include <linux/types.h>

enum xt_cluster_flags {
	XT_CLUSTER_F_INV	= (1 << 0)
};

struct xt_cluster_match_info {
	__u32 total_nodes;
	__u32 node_mask;
	__u32 hash_seed;
	__u32 flags;
};

#define XT_CLUSTER_NODES_MAX	32

#endif /* _XT_CLUSTER_MATCH_H */
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:25 PDT 2016
Sun, Jul 24, 2016  5:11:57 PM
Tue, Jul 26, 2016 12:02:59 AM
