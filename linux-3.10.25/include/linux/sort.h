#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:35 PDT 2016
Sun, Jul 24, 2016  5:20:30 PM
Tue, Jul 26, 2016 12:12:27 AM
