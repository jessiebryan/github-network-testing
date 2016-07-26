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
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:18 PDT 2016
Sun, Jul 24, 2016  5:25:45 PM
Tue, Jul 26, 2016 12:18:15 AM
