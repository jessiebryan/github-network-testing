#ifndef _MIPS_SPARSEMEM_H
#define _MIPS_SPARSEMEM_H
#ifdef CONFIG_SPARSEMEM

/*
 * SECTION_SIZE_BITS		2^N: how big each section will be
 * MAX_PHYSMEM_BITS		2^N: how much memory we can have in that space
 */
#if defined(CONFIG_MIPS_HUGE_TLB_SUPPORT) && defined(CONFIG_PAGE_SIZE_64KB)
# define SECTION_SIZE_BITS	29
#else
# define SECTION_SIZE_BITS	28
#endif
#define MAX_PHYSMEM_BITS	35

#endif /* CONFIG_SPARSEMEM */
#endif /* _MIPS_SPARSEMEM_H */
Tue Jul 19 12:53:31 PDT 2016
Fri Jul 22 16:14:55 PDT 2016
Sun, Jul 24, 2016  5:52:23 PM
Tue, Jul 26, 2016 12:47:38 AM
