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
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:11 PM
Mon, Jul 25, 2016  6:20:02 PM
Mon, Jul 25, 2016  7:33:17 PM
