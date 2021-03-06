#ifndef _SPARC64_TLBFLUSH_H
#define _SPARC64_TLBFLUSH_H

#include <linux/mm.h>
#include <asm/mmu_context.h>

/* TSB flush operations. */

#define TLB_BATCH_NR	192

struct tlb_batch {
	struct mm_struct *mm;
	unsigned long tlb_nr;
	unsigned long vaddrs[TLB_BATCH_NR];
};

extern void flush_tsb_kernel_range(unsigned long start, unsigned long end);
extern void flush_tsb_user(struct tlb_batch *tb);

/* TLB flush operations. */

extern void flush_tlb_pending(void);

#define flush_tlb_range(vma,start,end)	\
	do { (void)(start); flush_tlb_pending(); } while (0)
#define flush_tlb_page(vma,addr)	flush_tlb_pending()
#define flush_tlb_mm(mm)		flush_tlb_pending()

/* Local cpu only.  */
extern void __flush_tlb_all(void);

extern void __flush_tlb_kernel_range(unsigned long start, unsigned long end);

#ifndef CONFIG_SMP

#define flush_tlb_kernel_range(start,end) \
do {	flush_tsb_kernel_range(start,end); \
	__flush_tlb_kernel_range(start,end); \
} while (0)

#else /* CONFIG_SMP */

extern void smp_flush_tlb_kernel_range(unsigned long start, unsigned long end);

#define flush_tlb_kernel_range(start, end) \
do {	flush_tsb_kernel_range(start,end); \
	smp_flush_tlb_kernel_range(start, end); \
} while (0)

#endif /* ! CONFIG_SMP */

#endif /* _SPARC64_TLBFLUSH_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:59 PDT 2016
Sun, Jul 24, 2016  1:23:04 PM
Mon, Jul 25, 2016  6:31:52 PM
Mon, Jul 25, 2016  7:44:54 PM
Tue, Jul 26, 2016  2:20:30 PM
