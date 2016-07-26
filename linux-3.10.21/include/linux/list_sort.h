#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:48:40 PDT 2016
Fri Jul 22 16:05:37 PDT 2016
Sun, Jul 24, 2016  4:42:52 PM
Mon, Jul 25, 2016 11:30:46 PM
