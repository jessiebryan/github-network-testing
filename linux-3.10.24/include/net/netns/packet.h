/*
 * Packet network namespace
 */
#ifndef __NETNS_PACKET_H__
#define __NETNS_PACKET_H__

#include <linux/rculist.h>
#include <linux/mutex.h>

struct netns_packet {
	struct mutex		sklist_lock;
	struct hlist_head	sklist;
};

#endif /* __NETNS_PACKET_H__ */
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:22 PDT 2016
Sun, Jul 24, 2016  5:11:34 PM
Tue, Jul 26, 2016 12:02:34 AM
