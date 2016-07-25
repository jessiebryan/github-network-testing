#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:41 PDT 2016
Sun, Jul 24, 2016  4:43:22 PM
