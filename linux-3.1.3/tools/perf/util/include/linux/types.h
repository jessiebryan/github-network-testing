#ifndef _PERF_LINUX_TYPES_H_
#define _PERF_LINUX_TYPES_H_

#include <asm/types.h>

#define DECLARE_BITMAP(name,bits) \
	unsigned long name[BITS_TO_LONGS(bits)]

struct list_head {
	struct list_head *next, *prev;
};

struct hlist_head {
	struct hlist_node *first;
};

struct hlist_node {
	struct hlist_node *next, **pprev;
};

#endif
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:09 PM
Mon, Jul 25, 2016  8:00:18 PM
Tue, Jul 26, 2016  2:34:55 PM
