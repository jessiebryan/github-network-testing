#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:53:54 PDT 2016
Fri Jul 22 16:15:39 PDT 2016
Sun, Jul 24, 2016  5:57:45 PM
Tue, Jul 26, 2016 12:53:32 AM
