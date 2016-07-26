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
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:39 PDT 2016
Sun, Jul 24, 2016  3:25:34 PM
Mon, Jul 25, 2016 10:04:51 PM
