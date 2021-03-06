#ifndef _LINUX_BSEARCH_H
#define _LINUX_BSEARCH_H

#include <linux/types.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt));

#endif /* _LINUX_BSEARCH_H */
Tue Jul 19 12:49:56 PDT 2016
Fri Jul 22 16:07:59 PDT 2016
Sun, Jul 24, 2016  5:01:00 PM
Mon, Jul 25, 2016 11:50:58 PM
