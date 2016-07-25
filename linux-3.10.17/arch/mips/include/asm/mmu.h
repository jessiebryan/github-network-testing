#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:45:48 PDT 2016
Fri Jul 22 16:00:12 PDT 2016
Sun, Jul 24, 2016  4:01:00 PM
