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
Tue Jul 19 12:46:50 PDT 2016
Fri Jul 22 16:02:08 PDT 2016
Sun, Jul 24, 2016  4:16:02 PM
Mon, Jul 25, 2016 11:00:59 PM
