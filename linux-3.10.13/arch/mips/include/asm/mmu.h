#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:43:16 PDT 2016
Fri Jul 22 15:55:28 PDT 2016
Sun, Jul 24, 2016  3:24:07 PM
Mon, Jul 25, 2016 10:03:13 PM
