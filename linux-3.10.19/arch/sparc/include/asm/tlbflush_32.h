#ifndef _SPARC_TLBFLUSH_H
#define _SPARC_TLBFLUSH_H

#include <asm/cachetlb_32.h>

#define flush_tlb_all() \
	sparc32_cachetlb_ops->tlb_all()
#define flush_tlb_mm(mm) \
	sparc32_cachetlb_ops->tlb_mm(mm)
#define flush_tlb_range(vma, start, end) \
	sparc32_cachetlb_ops->tlb_range(vma, start, end)
#define flush_tlb_page(vma, addr) \
	sparc32_cachetlb_ops->tlb_page(vma, addr)

/*
 * This is a kludge, until I know better. --zaitcev XXX
 */
static inline void flush_tlb_kernel_range(unsigned long start,
					  unsigned long end)
{
	flush_tlb_all();
}

#endif /* _SPARC_TLBFLUSH_H */
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:43 PDT 2016
Sun, Jul 24, 2016  4:20:33 PM
Mon, Jul 25, 2016 11:06:00 PM
