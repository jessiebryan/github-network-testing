#ifndef _ASM_M32R_MMU_H
#define _ASM_M32R_MMU_H

#if !defined(CONFIG_MMU)

typedef struct {
	unsigned long		end_brk;
} mm_context_t;

#else /* CONFIG_MMU */

/* Default "unsigned long" context */
#ifndef CONFIG_SMP
typedef unsigned long mm_context_t;
#else
typedef unsigned long mm_context_t[NR_CPUS];
#endif

#endif /* CONFIG_MMU */

#endif /* _ASM_M32R_MMU_H */
Tue Jul 19 12:34:54 PDT 2016
Fri Jul 22 15:39:54 PDT 2016
Sun, Jul 24, 2016  1:29:46 PM
Mon, Jul 25, 2016  6:39:53 PM
Mon, Jul 25, 2016  7:52:45 PM
