#ifndef __ASM_GENERIC_MMU_H
#define __ASM_GENERIC_MMU_H

/*
 * This is the mmu.h header for nommu implementations.
 * Architectures with an MMU need something more complex.
 */
#ifndef __ASSEMBLY__
typedef struct {
	struct vm_list_struct	*vmlist;
	unsigned long		end_brk;
} mm_context_t;
#endif

#endif /* __ASM_GENERIC_MMU_H */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:52 PDT 2016
Sun, Jul 24, 2016  1:59:00 PM
Mon, Jul 25, 2016  8:27:17 PM
