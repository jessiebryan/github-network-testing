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
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:22 PDT 2016
Sun, Jul 24, 2016  4:48:37 PM
Mon, Jul 25, 2016 11:37:12 PM
