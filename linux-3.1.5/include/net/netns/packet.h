/*
 * Packet network namespace
 */
#ifndef __NETNS_PACKET_H__
#define __NETNS_PACKET_H__

#include <linux/rculist.h>
#include <linux/spinlock.h>

struct netns_packet {
	spinlock_t		sklist_lock;
	struct hlist_head	sklist;
};

#endif /* __NETNS_PACKET_H__ */
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:56 PDT 2016
Sun, Jul 24, 2016  1:52:00 PM
