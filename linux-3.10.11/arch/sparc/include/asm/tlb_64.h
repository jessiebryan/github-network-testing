#ifndef _SPARC64_TLB_H
#define _SPARC64_TLB_H

#include <linux/swap.h>
#include <linux/pagemap.h>
#include <asm/pgalloc.h>
#include <asm/tlbflush.h>
#include <asm/mmu_context.h>

#ifdef CONFIG_SMP
extern void smp_flush_tlb_pending(struct mm_struct *,
				  unsigned long, unsigned long *);
#endif

#ifdef CONFIG_SMP
extern void smp_flush_tlb_mm(struct mm_struct *mm);
#define do_flush_tlb_mm(mm) smp_flush_tlb_mm(mm)
#else
#define do_flush_tlb_mm(mm) __flush_tlb_mm(CTX_HWBITS(mm->context), SECONDARY_CONTEXT)
#endif

extern void __flush_tlb_pending(unsigned long, unsigned long, unsigned long *);
extern void flush_tlb_pending(void);

#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma)	do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)
#define tlb_flush(tlb)	flush_tlb_pending()

#include <asm-generic/tlb.h>

#endif /* _SPARC64_TLB_H */
Tue Jul 19 12:41:58 PDT 2016
Fri Jul 22 15:53:14 PDT 2016
Sun, Jul 24, 2016  3:06:48 PM
Mon, Jul 25, 2016  9:43:51 PM
