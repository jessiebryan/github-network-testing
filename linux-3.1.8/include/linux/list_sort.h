#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:37:42 PDT 2016
Fri Jul 22 15:45:04 PDT 2016
Sun, Jul 24, 2016  2:07:44 PM
Mon, Jul 25, 2016  8:37:42 PM
