#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:55 PDT 2016
Sun, Jul 24, 2016  3:19:50 PM
Mon, Jul 25, 2016  9:58:29 PM
