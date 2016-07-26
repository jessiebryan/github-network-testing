#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:40:53 PDT 2016
Fri Jul 22 15:51:16 PDT 2016
Sun, Jul 24, 2016  2:52:41 PM
Mon, Jul 25, 2016  9:27:54 PM
