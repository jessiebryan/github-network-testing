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
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:26 PDT 2016
Sun, Jul 24, 2016  5:11:59 PM
Tue, Jul 26, 2016 12:03:01 AM
