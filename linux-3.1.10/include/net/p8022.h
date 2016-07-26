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
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:28 PDT 2016
Sun, Jul 24, 2016  1:19:00 PM
Mon, Jul 25, 2016  6:27:00 PM
Mon, Jul 25, 2016  7:40:08 PM
Tue, Jul 26, 2016  2:15:56 PM
