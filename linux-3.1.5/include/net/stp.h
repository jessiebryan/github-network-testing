#ifndef _NET_STP_H
#define _NET_STP_H

struct stp_proto {
	unsigned char	group_address[ETH_ALEN];
	void		(*rcv)(const struct stp_proto *, struct sk_buff *,
			       struct net_device *);
	void		*data;
};

extern int stp_proto_register(const struct stp_proto *proto);
extern void stp_proto_unregister(const struct stp_proto *proto);

#endif /* _NET_STP_H */
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:57 PDT 2016
Sun, Jul 24, 2016  1:52:02 PM
Mon, Jul 25, 2016  8:19:01 PM
