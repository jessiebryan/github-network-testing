#ifndef _XEN_MMU_H

#include <linux/linkage.h>
#include <asm/page.h>

enum pt_level {
	PT_PGD,
	PT_PUD,
	PT_PMD,
	PT_PTE
};


bool __set_phys_to_machine(unsigned long pfn, unsigned long mfn);

void set_pte_mfn(unsigned long vaddr, unsigned long pfn, pgprot_t flags);

pte_t xen_ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr, pte_t *ptep);
void  xen_ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
				  pte_t *ptep, pte_t pte);

unsigned long xen_read_cr2_direct(void);

extern void xen_init_mmu_ops(void);
extern void xen_hvm_init_mmu_ops(void);
#endif	/* _XEN_MMU_H */
Tue Jul 19 12:36:19 PDT 2016
Fri Jul 22 15:42:25 PDT 2016
Sun, Jul 24, 2016  1:48:16 PM
Mon, Jul 25, 2016  8:14:38 PM
