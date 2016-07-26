#ifndef _ASM_X86_CACHE_H
#define _ASM_X86_CACHE_H

#include <linux/linkage.h>

/* L1 cache line size */
#define L1_CACHE_SHIFT	(CONFIG_X86_L1_CACHE_SHIFT)
#define L1_CACHE_BYTES	(1 << L1_CACHE_SHIFT)

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

#define INTERNODE_CACHE_SHIFT CONFIG_X86_INTERNODE_CACHE_SHIFT
#define INTERNODE_CACHE_BYTES (1 << INTERNODE_CACHE_SHIFT)

#ifdef CONFIG_X86_VSMP
#ifdef CONFIG_SMP
#define __cacheline_aligned_in_smp					\
	__attribute__((__aligned__(INTERNODE_CACHE_BYTES)))		\
	__page_aligned_data
#endif
#endif

#endif /* _ASM_X86_CACHE_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:05 PM
Mon, Jul 25, 2016  6:22:17 PM
