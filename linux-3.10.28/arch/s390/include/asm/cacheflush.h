#ifndef _S390_CACHEFLUSH_H
#define _S390_CACHEFLUSH_H

/* Caches aren't brain-dead on the s390. */
#include <asm-generic/cacheflush.h>

#ifdef CONFIG_DEBUG_PAGEALLOC
void kernel_map_pages(struct page *page, int numpages, int enable);
#endif

int set_memory_ro(unsigned long addr, int numpages);
int set_memory_rw(unsigned long addr, int numpages);
int set_memory_nx(unsigned long addr, int numpages);
int set_memory_x(unsigned long addr, int numpages);

#endif /* _S390_CACHEFLUSH_H */
Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:45 PDT 2016
Sun, Jul 24, 2016  5:43:36 PM
Tue, Jul 26, 2016 12:37:55 AM
