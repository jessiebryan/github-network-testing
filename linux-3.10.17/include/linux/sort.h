#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:46:09 PDT 2016
Fri Jul 22 16:00:53 PDT 2016
Sun, Jul 24, 2016  4:06:27 PM
Mon, Jul 25, 2016 10:50:18 PM
