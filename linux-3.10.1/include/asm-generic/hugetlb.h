#ifndef _ASM_GENERIC_HUGETLB_H
#define _ASM_GENERIC_HUGETLB_H

static inline pte_t mk_huge_pte(struct page *page, pgprot_t pgprot)
{
	return mk_pte(page, pgprot);
}

static inline int huge_pte_write(pte_t pte)
{
	return pte_write(pte);
}

static inline int huge_pte_dirty(pte_t pte)
{
	return pte_dirty(pte);
}

static inline pte_t huge_pte_mkwrite(pte_t pte)
{
	return pte_mkwrite(pte);
}

static inline pte_t huge_pte_mkdirty(pte_t pte)
{
	return pte_mkdirty(pte);
}

static inline pte_t huge_pte_modify(pte_t pte, pgprot_t newprot)
{
	return pte_modify(pte, newprot);
}

static inline void huge_pte_clear(struct mm_struct *mm, unsigned long addr,
				  pte_t *ptep)
{
	pte_clear(mm, addr, ptep);
}

#endif /* _ASM_GENERIC_HUGETLB_H */
Tue Jul 19 12:38:54 PDT 2016
Fri Jul 22 15:47:20 PDT 2016
Sun, Jul 24, 2016  2:24:04 PM
Mon, Jul 25, 2016  8:55:52 PM
