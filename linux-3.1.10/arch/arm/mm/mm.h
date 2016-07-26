#ifdef CONFIG_MMU

/* the upper-most page table pointer */
extern pmd_t *top_pmd;

#define TOP_PTE(x)	pte_offset_kernel(top_pmd, x)

static inline pmd_t *pmd_off_k(unsigned long virt)
{
	return pmd_offset(pud_offset(pgd_offset_k(virt), virt), virt);
}

struct mem_type {
	pteval_t prot_pte;
	unsigned int prot_l1;
	unsigned int prot_sect;
	unsigned int domain;
};

const struct mem_type *get_mem_type(unsigned int type);

extern void __flush_dcache_page(struct address_space *mapping, struct page *page);

#endif

#ifdef CONFIG_ZONE_DMA
extern u32 arm_dma_limit;
#else
#define arm_dma_limit ((u32)~0)
#endif

void __init bootmem_init(void);
void arm_mm_memblock_reserve(void);
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:23 PM
Mon, Jul 25, 2016  6:19:04 PM
Mon, Jul 25, 2016  7:32:21 PM
Tue, Jul 26, 2016  2:08:33 PM
