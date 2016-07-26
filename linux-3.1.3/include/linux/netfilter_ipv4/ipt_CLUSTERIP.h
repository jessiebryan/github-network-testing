#ifndef _IPT_CLUSTERIP_H_target
#define _IPT_CLUSTERIP_H_target

#include <linux/types.h>

enum clusterip_hashmode {
    CLUSTERIP_HASHMODE_SIP = 0,
    CLUSTERIP_HASHMODE_SIP_SPT,
    CLUSTERIP_HASHMODE_SIP_SPT_DPT,
};

#define CLUSTERIP_HASHMODE_MAX CLUSTERIP_HASHMODE_SIP_SPT_DPT

#define CLUSTERIP_MAX_NODES 16

#define CLUSTERIP_FLAG_NEW 0x00000001

struct clusterip_config;

struct ipt_clusterip_tgt_info {

	__u32 flags;

	/* only relevant for new ones */
	__u8 clustermac[6];
	__u16 num_total_nodes;
	__u16 num_local_nodes;
	__u16 local_nodes[CLUSTERIP_MAX_NODES];
	__u32 hash_mode;
	__u32 hash_initval;

	/* Used internally by the kernel */
	struct clusterip_config *config;
};

#endif /*_IPT_CLUSTERIP_H_target*/
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:36 PDT 2016
Sun, Jul 24, 2016  1:34:58 PM
Mon, Jul 25, 2016  7:58:53 PM
Tue, Jul 26, 2016  2:33:37 PM
