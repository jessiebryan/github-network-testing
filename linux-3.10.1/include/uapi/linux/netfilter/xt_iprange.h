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
Tue Jul 19 12:39:01 PDT 2016
Fri Jul 22 15:47:33 PDT 2016
Sun, Jul 24, 2016  2:25:50 PM
Mon, Jul 25, 2016  8:57:50 PM
