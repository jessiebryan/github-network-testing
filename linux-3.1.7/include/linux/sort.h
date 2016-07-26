#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:37:06 PDT 2016
Fri Jul 22 15:43:59 PDT 2016
Sun, Jul 24, 2016  1:59:54 PM
Mon, Jul 25, 2016  8:28:21 PM
