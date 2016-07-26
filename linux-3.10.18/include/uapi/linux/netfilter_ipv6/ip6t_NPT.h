#ifndef __NETFILTER_IP6T_NPT
#define __NETFILTER_IP6T_NPT

#include <linux/types.h>
#include <linux/netfilter.h>

struct ip6t_npt_tginfo {
	union nf_inet_addr	src_pfx;
	union nf_inet_addr	dst_pfx;
	__u8			src_pfx_len;
	__u8			dst_pfx_len;
	/* Used internally by the kernel */
	__sum16			adjustment;
};

#endif /* __NETFILTER_IP6T_NPT */
Tue Jul 19 12:46:52 PDT 2016
Fri Jul 22 16:02:11 PDT 2016
Sun, Jul 24, 2016  4:16:28 PM
Mon, Jul 25, 2016 11:01:28 PM
