#ifndef __NETNS_MIB_H__
#define __NETNS_MIB_H__

#include <net/snmp.h>

struct netns_mib {
	DEFINE_SNMP_STAT(struct tcp_mib, tcp_statistics);
	DEFINE_SNMP_STAT(struct ipstats_mib, ip_statistics);
	DEFINE_SNMP_STAT(struct linux_mib, net_statistics);
	DEFINE_SNMP_STAT(struct udp_mib, udp_statistics);
	DEFINE_SNMP_STAT(struct udp_mib, udplite_statistics);
	DEFINE_SNMP_STAT(struct icmp_mib, icmp_statistics);
	DEFINE_SNMP_STAT(struct icmpmsg_mib, icmpmsg_statistics);

#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
	struct proc_dir_entry *proc_net_devsnmp6;
	DEFINE_SNMP_STAT(struct udp_mib, udp_stats_in6);
	DEFINE_SNMP_STAT(struct udp_mib, udplite_stats_in6);
	DEFINE_SNMP_STAT(struct ipstats_mib, ipv6_statistics);
	DEFINE_SNMP_STAT(struct icmpv6_mib, icmpv6_statistics);
	DEFINE_SNMP_STAT(struct icmpv6msg_mib, icmpv6msg_statistics);
#endif
#ifdef CONFIG_XFRM_STATISTICS
	DEFINE_SNMP_STAT(struct linux_xfrm_mib, xfrm_statistics);
#endif
};

#endif
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:16 PM
Mon, Jul 25, 2016  6:36:54 PM
Mon, Jul 25, 2016  7:49:49 PM
Tue, Jul 26, 2016  2:25:07 PM
