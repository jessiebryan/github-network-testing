#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:20 PDT 2016
Sun, Jul 24, 2016  5:47:57 PM
Tue, Jul 26, 2016 12:42:41 AM
