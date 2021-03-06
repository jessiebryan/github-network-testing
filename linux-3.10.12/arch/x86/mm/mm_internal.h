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
Tue Jul 19 12:42:44 PDT 2016
Fri Jul 22 15:54:29 PDT 2016
Sun, Jul 24, 2016  3:16:29 PM
Mon, Jul 25, 2016  9:54:48 PM
