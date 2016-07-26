#ifndef _NF_CONNTRACK_SNMP_H
#define _NF_CONNTRACK_SNMP_H

extern int (*nf_nat_snmp_hook)(struct sk_buff *skb,
				unsigned int protoff,
				struct nf_conn *ct,
				enum ip_conntrack_info ctinfo);

#endif /* _NF_CONNTRACK_SNMP_H */
Tue Jul 19 12:49:20 PDT 2016
Fri Jul 22 16:06:51 PDT 2016
Sun, Jul 24, 2016  4:52:16 PM
Mon, Jul 25, 2016 11:41:17 PM
