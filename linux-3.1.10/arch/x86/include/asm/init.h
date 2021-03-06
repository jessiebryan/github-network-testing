#ifndef _ASM_X86_INIT_32_H
#define _ASM_X86_INIT_32_H

#ifdef CONFIG_X86_32
extern void __init early_ioremap_page_table_range_init(void);
#endif

extern unsigned long __init
kernel_physical_mapping_init(unsigned long start,
			     unsigned long end,
			     unsigned long page_size_mask);


extern unsigned long __initdata pgt_buf_start;
extern unsigned long __meminitdata pgt_buf_end;
extern unsigned long __meminitdata pgt_buf_top;

#endif /* _ASM_X86_INIT_32_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:07 PM
Mon, Jul 25, 2016  6:22:20 PM
Mon, Jul 25, 2016  7:35:33 PM
Tue, Jul 26, 2016  2:11:33 PM
