#ifndef _LINUX_BSEARCH_H
#define _LINUX_BSEARCH_H

#include <linux/types.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt));

#endif /* _LINUX_BSEARCH_H */
Tue Jul 19 12:36:29 PDT 2016
Fri Jul 22 15:42:47 PDT 2016
Sun, Jul 24, 2016  1:50:54 PM
Mon, Jul 25, 2016  8:17:41 PM
