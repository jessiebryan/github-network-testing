#ifndef _NET_P8022_H
#define _NET_P8022_H
extern struct datalink_proto *
	register_8022_client(unsigned char type,
			     int (*func)(struct sk_buff *skb,
					 struct net_device *dev,
					 struct packet_type *pt,
					 struct net_device *orig_dev));
extern void unregister_8022_client(struct datalink_proto *proto);

extern struct datalink_proto *make_8023_client(void);
extern void destroy_8023_client(struct datalink_proto *dl);
#endif
Tue Jul 19 12:35:26 PDT 2016
Fri Jul 22 15:40:41 PDT 2016
Sun, Jul 24, 2016  1:35:31 PM
Mon, Jul 25, 2016  7:59:33 PM
Tue, Jul 26, 2016  2:34:14 PM
