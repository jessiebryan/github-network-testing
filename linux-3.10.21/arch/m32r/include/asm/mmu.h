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
Tue Jul 19 12:48:18 PDT 2016
Fri Jul 22 16:04:54 PDT 2016
Sun, Jul 24, 2016  4:37:23 PM
Mon, Jul 25, 2016 11:24:41 PM
