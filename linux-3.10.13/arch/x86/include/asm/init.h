#ifndef _ASM_X86_INIT_H
#define _ASM_X86_INIT_H

struct x86_mapping_info {
	void *(*alloc_pgt_page)(void *); /* allocate buf for page table */
	void *context;			 /* context for alloc_pgt_page */
	unsigned long pmd_flag;		 /* page flag for PMD entry */
	bool kernel_mapping;		 /* kernel mapping or ident mapping */
};

int kernel_ident_mapping_init(struct x86_mapping_info *info, pgd_t *pgd_page,
				unsigned long addr, unsigned long end);

#endif /* _ASM_X86_INIT_H */
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:39 PDT 2016
Sun, Jul 24, 2016  3:25:32 PM
Mon, Jul 25, 2016 10:04:49 PM
