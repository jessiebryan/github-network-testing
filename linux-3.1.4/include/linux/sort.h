#ifndef _LINUX_SORT_H
#define _LINUX_SORT_H

#include <linux/types.h>

void sort(void *base, size_t num, size_t size,
	  int (*cmp)(const void *, const void *),
	  void (*swap)(void *, void *, int));

#endif
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:24 PM
Mon, Jul 25, 2016  8:08:51 PM
Tue, Jul 26, 2016  2:42:58 PM
