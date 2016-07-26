#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:42 PDT 2016
Sun, Jul 24, 2016  1:43:00 PM
Mon, Jul 25, 2016  8:08:23 PM
Tue, Jul 26, 2016  2:42:31 PM
