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
	DEFINE_SNMP_STAT_ATOMIC(struct icmpmsg_mib, icmpmsg_statistics);

#if IS_ENABLED(CONFIG_IPV6)
	struct proc_dir_entry *proc_net_devsnmp6;
	DEFINE_SNMP_STAT(struct udp_mib, udp_stats_in6);
	DEFINE_SNMP_STAT(struct udp_mib, udplite_stats_in6);
	DEFINE_SNMP_STAT(struct ipstats_mib, ipv6_statistics);
	DEFINE_SNMP_STAT(struct icmpv6_mib, icmpv6_statistics);
	DEFINE_SNMP_STAT_ATOMIC(struct icmpv6msg_mib, icmpv6msg_statistics);
#endif
#ifdef CONFIG_XFRM_STATISTICS
	DEFINE_SNMP_STAT(struct linux_xfrm_mib, xfrm_statistics);
#endif
};

#endif
Tue Jul 19 12:44:58 PDT 2016
Fri Jul 22 15:58:35 PDT 2016
Sun, Jul 24, 2016  3:48:23 PM
Mon, Jul 25, 2016 10:30:14 PM
