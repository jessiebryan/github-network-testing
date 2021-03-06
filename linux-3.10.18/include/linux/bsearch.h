#ifndef _LINUX_BSEARCH_H
#define _LINUX_BSEARCH_H

#include <linux/types.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt));

#endif /* _LINUX_BSEARCH_H */
Tue Jul 19 12:46:45 PDT 2016
Fri Jul 22 16:01:59 PDT 2016
Sun, Jul 24, 2016  4:14:49 PM
Mon, Jul 25, 2016 10:59:37 PM
