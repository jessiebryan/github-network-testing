#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:58 PDT 2016
Sun, Jul 24, 2016  1:30:14 PM
Mon, Jul 25, 2016  6:40:26 PM
