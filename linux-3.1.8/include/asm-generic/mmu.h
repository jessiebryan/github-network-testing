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
Tue Jul 19 12:37:40 PDT 2016
Fri Jul 22 15:45:00 PDT 2016
Sun, Jul 24, 2016  2:07:15 PM
Mon, Jul 25, 2016  8:37:09 PM
