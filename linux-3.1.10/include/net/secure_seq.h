#ifndef _NET_SECURE_SEQ
#define _NET_SECURE_SEQ

#include <linux/types.h>

extern __u32 secure_ip_id(__be32 daddr);
extern __u32 secure_ipv6_id(const __be32 daddr[4]);
extern u32 secure_ipv4_port_ephemeral(__be32 saddr, __be32 daddr, __be16 dport);
extern u32 secure_ipv6_port_ephemeral(const __be32 *saddr, const __be32 *daddr,
				      __be16 dport);
extern __u32 secure_tcp_sequence_number(__be32 saddr, __be32 daddr,
					__be16 sport, __be16 dport);
extern __u32 secure_tcpv6_sequence_number(__be32 *saddr, __be32 *daddr,
					  __be16 sport, __be16 dport);
extern u64 secure_dccp_sequence_number(__be32 saddr, __be32 daddr,
				       __be16 sport, __be16 dport);
extern u64 secure_dccpv6_sequence_number(__be32 *saddr, __be32 *daddr,
					 __be16 sport, __be16 dport);

#endif /* _NET_SECURE_SEQ */
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:28 PDT 2016
Sun, Jul 24, 2016  1:19:01 PM
Mon, Jul 25, 2016  6:27:02 PM
Mon, Jul 25, 2016  7:40:09 PM
Tue, Jul 26, 2016  2:15:58 PM
