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
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:03 PDT 2016
Sun, Jul 24, 2016  1:38:01 PM
Mon, Jul 25, 2016  8:02:30 PM
Tue, Jul 26, 2016  2:37:01 PM
