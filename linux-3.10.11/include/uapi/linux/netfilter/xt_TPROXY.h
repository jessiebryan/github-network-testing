#ifndef _XT_TPROXY_H
#define _XT_TPROXY_H

#include <linux/types.h>

/* TPROXY target is capable of marking the packet to perform
 * redirection. We can get rid of that whenever we get support for
 * mutliple targets in the same rule. */
struct xt_tproxy_target_info {
	__u32 mark_mask;
	__u32 mark_value;
	__be32 laddr;
	__be16 lport;
};

struct xt_tproxy_target_info_v1 {
	__u32 mark_mask;
	__u32 mark_value;
	union nf_inet_addr laddr;
	__be16 lport;
};

#endif /* _XT_TPROXY_H */
Tue Jul 19 12:42:25 PDT 2016
Fri Jul 22 15:53:54 PDT 2016
Sun, Jul 24, 2016  3:11:54 PM
Mon, Jul 25, 2016  9:49:36 PM
