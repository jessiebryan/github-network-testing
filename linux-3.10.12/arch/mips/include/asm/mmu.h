#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:42:37 PDT 2016
Fri Jul 22 15:54:17 PDT 2016
Sun, Jul 24, 2016  3:14:53 PM
Mon, Jul 25, 2016  9:52:59 PM
