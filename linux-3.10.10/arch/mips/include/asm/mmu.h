#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:39:13 PDT 2016
Fri Jul 22 15:47:58 PDT 2016
Sun, Jul 24, 2016  2:28:50 PM
