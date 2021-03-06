#ifndef _CRIS_CACHEFLUSH_H
#define _CRIS_CACHEFLUSH_H

/* Keep includes the same across arches.  */
#include <linux/mm.h>

/* The cache doesn't need to be flushed when TLB entries change because 
 * the cache is mapped to physical memory, not virtual memory
 */
#define flush_cache_all()			do { } while (0)
#define flush_cache_mm(mm)			do { } while (0)
#define flush_cache_dup_mm(mm)			do { } while (0)
#define flush_cache_range(vma, start, end)	do { } while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do { } while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do { } while (0)
#define flush_dcache_mmap_lock(mapping)		do { } while (0)
#define flush_dcache_mmap_unlock(mapping)	do { } while (0)
#define flush_icache_range(start, end)		do { } while (0)
#define flush_icache_page(vma,pg)		do { } while (0)
#define flush_icache_user_range(vma,pg,adr,len)	do { } while (0)
#define flush_cache_vmap(start, end)		do { } while (0)
#define flush_cache_vunmap(start, end)		do { } while (0)

#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
	memcpy(dst, src, len)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
	memcpy(dst, src, len)

int change_page_attr(struct page *page, int numpages, pgprot_t prot);

#endif /* _CRIS_CACHEFLUSH_H */
Tue Jul 19 12:53:27 PDT 2016
Fri Jul 22 16:14:47 PDT 2016
Sun, Jul 24, 2016  5:51:18 PM
Tue, Jul 26, 2016 12:46:25 AM
