#ifndef _M68K_PAGE_NO_H
#define _M68K_PAGE_NO_H

#ifndef __ASSEMBLY__
 
extern unsigned long memory_start;
extern unsigned long memory_end;

#define get_user_page(vaddr)		__get_free_page(GFP_KERNEL)
#define free_user_page(page, addr)	free_page(addr)

#define clear_page(page)	memset((page), 0, PAGE_SIZE)
#define copy_page(to,from)	memcpy((to), (from), PAGE_SIZE)

#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)

#define __alloc_zeroed_user_highpage(movableflags, vma, vaddr) \
	alloc_page_vma(GFP_HIGHUSER | __GFP_ZERO | movableflags, vma, vaddr)
#define __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE

#define __pa(vaddr)		((unsigned long)(vaddr))
#define __va(paddr)		((void *)(paddr))

#define virt_to_pfn(kaddr)	(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_virt(pfn)	__va((pfn) << PAGE_SHIFT)

#define virt_to_page(addr)	(mem_map + (((unsigned long)(addr)-PAGE_OFFSET) >> PAGE_SHIFT))
#define page_to_virt(page)	((((page) - mem_map) << PAGE_SHIFT) + PAGE_OFFSET)

#define pfn_to_page(pfn)	virt_to_page(pfn_to_virt(pfn))
#define page_to_pfn(page)	virt_to_pfn(page_to_virt(page))
#define pfn_valid(pfn)	        ((pfn) < max_mapnr)

#define	virt_addr_valid(kaddr)	(((void *)(kaddr) >= (void *)PAGE_OFFSET) && \
				((void *)(kaddr) < (void *)memory_end))

#endif /* __ASSEMBLY__ */

#endif /* _M68K_PAGE_NO_H */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:43 PDT 2016
Sun, Jul 24, 2016  1:13:23 PM
Mon, Jul 25, 2016  6:20:16 PM
Mon, Jul 25, 2016  7:33:32 PM
Tue, Jul 26, 2016  2:09:39 PM
