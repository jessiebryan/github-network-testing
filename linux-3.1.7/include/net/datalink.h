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
Tue Jul 19 12:37:07 PDT 2016
Fri Jul 22 15:44:01 PDT 2016
Sun, Jul 24, 2016  2:00:10 PM
Mon, Jul 25, 2016  8:28:40 PM
