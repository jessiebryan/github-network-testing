#ifndef _LINUX_LIST_SORT_H
#define _LINUX_LIST_SORT_H

#include <linux/types.h>

struct list_head;

void list_sort(void *priv, struct list_head *head,
	       int (*cmp)(void *priv, struct list_head *a,
			  struct list_head *b));
#endif
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:48 PDT 2016
Sun, Jul 24, 2016  5:29:19 PM
Tue, Jul 26, 2016 12:22:09 AM
