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
Tue Jul 19 12:36:52 PDT 2016
Fri Jul 22 15:43:31 PDT 2016
Sun, Jul 24, 2016  1:56:24 PM
Mon, Jul 25, 2016  8:24:11 PM
