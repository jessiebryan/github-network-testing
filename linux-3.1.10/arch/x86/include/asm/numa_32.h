#ifndef _ASM_X86_NUMA_32_H
#define _ASM_X86_NUMA_32_H

#ifdef CONFIG_HIGHMEM
extern void set_highmem_pages_init(void);
#else
static inline void set_highmem_pages_init(void)
{
}
#endif

#endif /* _ASM_X86_NUMA_32_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:09 PM
Mon, Jul 25, 2016  6:22:23 PM
Mon, Jul 25, 2016  7:35:36 PM
Tue, Jul 26, 2016  2:11:36 PM
