#ifndef _ASM_IA64_SPARSEMEM_H
#define _ASM_IA64_SPARSEMEM_H

#ifdef CONFIG_SPARSEMEM
/*
 * SECTION_SIZE_BITS            2^N: how big each section will be
 * MAX_PHYSMEM_BITS             2^N: how much memory we can have in that space
 */

#define SECTION_SIZE_BITS	(30)
#define MAX_PHYSMEM_BITS	(50)
#ifdef CONFIG_FORCE_MAX_ZONEORDER
#if ((CONFIG_FORCE_MAX_ZONEORDER - 1 + PAGE_SHIFT) > SECTION_SIZE_BITS)
#undef SECTION_SIZE_BITS
#define SECTION_SIZE_BITS (CONFIG_FORCE_MAX_ZONEORDER - 1 + PAGE_SHIFT)
#endif
#endif

#endif /* CONFIG_SPARSEMEM */
#endif /* _ASM_IA64_SPARSEMEM_H */
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:02 PDT 2016
Sun, Jul 24, 2016  1:37:57 PM
Mon, Jul 25, 2016  8:02:25 PM
Tue, Jul 26, 2016  2:36:56 PM
