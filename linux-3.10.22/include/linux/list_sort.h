#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:49:20 PDT 2016
Fri Jul 22 16:06:49 PDT 2016
Sun, Jul 24, 2016  4:52:05 PM
Mon, Jul 25, 2016 11:41:06 PM
