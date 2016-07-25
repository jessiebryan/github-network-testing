#ifndef __X86_MM_INTERNAL_H
#define __X86_MM_INTERNAL_H

void *alloc_low_pages(unsigned int num);
static inline void *alloc_low_page(void)
{
	return alloc_low_pages(1);
}

void early_ioremap_page_table_range_init(void);

unsigned long kernel_physical_mapping_init(unsigned long start,
					     unsigned long end,
					     unsigned long page_size_mask);
void zone_sizes_init(void);

extern int after_bootmem;

#endif	/* __X86_MM_INTERNAL_H */
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:36 PDT 2016
Sun, Jul 24, 2016  4:11:50 PM
