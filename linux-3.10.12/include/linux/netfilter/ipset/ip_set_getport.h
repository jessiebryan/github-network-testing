#ifndef _IP_SET_GETPORT_H
#define _IP_SET_GETPORT_H

extern bool ip_set_get_ip4_port(const struct sk_buff *skb, bool src,
				__be16 *port, u8 *proto);

#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
extern bool ip_set_get_ip6_port(const struct sk_buff *skb, bool src,
				__be16 *port, u8 *proto);
#else
static inline bool ip_set_get_ip6_port(const struct sk_buff *skb, bool src,
				       __be16 *port, u8 *proto)
{
	return false;
}
#endif

extern bool ip_set_get_ip_port(const struct sk_buff *skb, u8 pf, bool src,
				__be16 *port);

static inline bool ip_set_proto_with_ports(u8 proto)
{
	switch (proto) {
	case IPPROTO_TCP:
	case IPPROTO_SCTP:
	case IPPROTO_UDP:
	case IPPROTO_UDPLITE:
		return true;
	}
	return false;
}

#endif /*_IP_SET_GETPORT_H*/
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:56 PDT 2016
Sun, Jul 24, 2016  3:20:00 PM
Mon, Jul 25, 2016  9:58:40 PM
