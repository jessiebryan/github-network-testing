#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:47:24 PDT 2016
Fri Jul 22 16:03:13 PDT 2016
Sun, Jul 24, 2016  4:24:25 PM
Mon, Jul 25, 2016 11:10:15 PM
