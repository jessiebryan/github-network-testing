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
Tue Jul 19 12:53:55 PDT 2016
Fri Jul 22 16:15:42 PDT 2016
Sun, Jul 24, 2016  5:58:09 PM
Tue, Jul 26, 2016 12:53:58 AM
