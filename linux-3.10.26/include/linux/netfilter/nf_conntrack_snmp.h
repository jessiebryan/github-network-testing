#ifndef _NF_CONNTRACK_SNMP_H
#define _NF_CONNTRACK_SNMP_H

extern int (*nf_nat_snmp_hook)(struct sk_buff *skb,
				unsigned int protoff,
				struct nf_conn *ct,
				enum ip_conntrack_info ctinfo);

#endif /* _NF_CONNTRACK_SNMP_H */
Tue Jul 19 12:51:56 PDT 2016
Fri Jul 22 16:11:50 PDT 2016
Sun, Jul 24, 2016  5:29:29 PM
Tue, Jul 26, 2016 12:22:21 AM
