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
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:10 PM
Mon, Jul 25, 2016  8:08:34 PM
Tue, Jul 26, 2016  2:42:42 PM
