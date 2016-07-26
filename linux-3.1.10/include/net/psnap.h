#ifndef _NET_PSNAP_H
#define _NET_PSNAP_H

extern struct datalink_proto *
register_snap_client(const unsigned char *desc,
		     int (*rcvfunc)(struct sk_buff *, struct net_device *,
				    struct packet_type *,
				    struct net_device *orig_dev));
extern void unregister_snap_client(struct datalink_proto *proto);

#endif
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:28 PDT 2016
Sun, Jul 24, 2016  1:19:01 PM
Mon, Jul 25, 2016  6:27:01 PM
Mon, Jul 25, 2016  7:40:08 PM
