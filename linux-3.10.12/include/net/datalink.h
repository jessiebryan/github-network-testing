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
Tue Jul 19 12:43:02 PDT 2016
Fri Jul 22 15:55:01 PDT 2016
Sun, Jul 24, 2016  3:20:36 PM
Mon, Jul 25, 2016  9:59:20 PM
