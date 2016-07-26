#ifndef _LINUX_BSEARCH_H
#define _LINUX_BSEARCH_H

#include <linux/types.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt));

#endif /* _LINUX_BSEARCH_H */
Tue Jul 19 12:43:35 PDT 2016
Fri Jul 22 15:56:03 PDT 2016
Sun, Jul 24, 2016  3:28:42 PM
Mon, Jul 25, 2016 10:08:19 PM
