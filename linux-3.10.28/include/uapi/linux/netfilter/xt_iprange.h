#ifndef _LINUX_NETFILTER_XT_IPRANGE_H
#define _LINUX_NETFILTER_XT_IPRANGE_H 1

#include <linux/types.h>
#include <linux/netfilter.h>

enum {
	IPRANGE_SRC     = 1 << 0,	/* match source IP address */
	IPRANGE_DST     = 1 << 1,	/* match destination IP address */
	IPRANGE_SRC_INV = 1 << 4,	/* negate the condition */
	IPRANGE_DST_INV = 1 << 5,	/* -"- */
};

struct xt_iprange_mtinfo {
	union nf_inet_addr src_min, src_max;
	union nf_inet_addr dst_min, dst_max;
	__u8 flags;
};

#endif /* _LINUX_NETFILTER_XT_IPRANGE_H */
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:13 PM
Tue, Jul 26, 2016 12:44:05 AM
