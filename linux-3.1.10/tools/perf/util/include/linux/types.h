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
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:38 PM
Mon, Jul 25, 2016  6:27:45 PM
Mon, Jul 25, 2016  7:40:52 PM
Tue, Jul 26, 2016  2:16:38 PM
