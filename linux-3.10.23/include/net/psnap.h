#ifndef _NET_PSNAP_H
#define _NET_PSNAP_H

extern struct datalink_proto *
register_snap_client(const unsigned char *desc,
		     int (*rcvfunc)(struct sk_buff *, struct net_device *,
				    struct packet_type *,
				    struct net_device *orig_dev));
extern void unregister_snap_client(struct datalink_proto *proto);

#endif
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:09 PDT 2016
Sun, Jul 24, 2016  5:02:15 PM
Mon, Jul 25, 2016 11:52:20 PM
