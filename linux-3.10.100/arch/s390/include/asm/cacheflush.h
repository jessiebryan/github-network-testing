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
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:42 PM
Mon, Jul 25, 2016  9:12:09 PM
