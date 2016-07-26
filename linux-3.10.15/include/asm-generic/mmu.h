#ifndef __ASM_GENERIC_MMU_H
#define __ASM_GENERIC_MMU_H

/*
 * This is the mmu.h header for nommu implementations.
 * Architectures with an MMU need something more complex.
 */
#ifndef __ASSEMBLY__
typedef struct {
	unsigned long		end_brk;

#ifdef CONFIG_BINFMT_ELF_FDPIC
	unsigned long		exec_fdpic_loadmap;
	unsigned long		interp_fdpic_loadmap;
#endif
} mm_context_t;
#endif

#endif /* __ASM_GENERIC_MMU_H */
Tue Jul 19 12:44:53 PDT 2016
Fri Jul 22 15:58:25 PDT 2016
Sun, Jul 24, 2016  3:47:01 PM
Mon, Jul 25, 2016 10:28:41 PM
