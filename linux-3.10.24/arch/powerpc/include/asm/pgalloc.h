#ifndef _ASM_POWERPC_PGALLOC_H
#define _ASM_POWERPC_PGALLOC_H
#ifdef __KERNEL__

#include <linux/mm.h>
#include <asm-generic/tlb.h>

#ifdef CONFIG_PPC_BOOK3E
extern void tlb_flush_pgtable(struct mmu_gather *tlb, unsigned long address);
#else /* CONFIG_PPC_BOOK3E */
static inline void tlb_flush_pgtable(struct mmu_gather *tlb,
				     unsigned long address)
{
}
#endif /* !CONFIG_PPC_BOOK3E */

#ifdef CONFIG_PPC64
#include <asm/pgalloc-64.h>
#else
#include <asm/pgalloc-32.h>
#endif

#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_PGALLOC_H */
Tue Jul 19 12:50:18 PDT 2016
Fri Jul 22 16:08:41 PDT 2016
Sun, Jul 24, 2016  5:06:14 PM
Mon, Jul 25, 2016 11:56:40 PM
