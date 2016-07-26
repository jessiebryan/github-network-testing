#ifndef _NET_INET_DATALINK_H_
#define _NET_INET_DATALINK_H_

struct datalink_proto {
        unsigned char   type[8];

	struct llc_sap   *sap;

        unsigned short  header_length;

        int     (*rcvfunc)(struct sk_buff *, struct net_device *,
                                struct packet_type *, struct net_device *);
	int     (*request)(struct datalink_proto *, struct sk_buff *,
                                        unsigned char *);
	struct list_head node;
};

#endif
Tue Jul 19 12:34:33 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:11 PM
Mon, Jul 25, 2016  6:36:48 PM
Mon, Jul 25, 2016  7:49:43 PM
Tue, Jul 26, 2016  2:25:01 PM
