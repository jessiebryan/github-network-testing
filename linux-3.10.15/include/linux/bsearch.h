#ifndef _LINUX_BSEARCH_H
#define _LINUX_BSEARCH_H

#include <linux/types.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt));

#endif /* _LINUX_BSEARCH_H */
Tue Jul 19 12:44:53 PDT 2016
Fri Jul 22 15:58:26 PDT 2016
Sun, Jul 24, 2016  3:47:10 PM
Mon, Jul 25, 2016 10:28:51 PM
