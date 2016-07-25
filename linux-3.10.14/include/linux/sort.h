#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:44:17 PDT 2016
Fri Jul 22 15:57:22 PDT 2016
Sun, Jul 24, 2016  3:38:46 PM
