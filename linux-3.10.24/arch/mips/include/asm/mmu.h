#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:50:16 PDT 2016
Fri Jul 22 16:08:37 PDT 2016
Sun, Jul 24, 2016  5:05:43 PM
Mon, Jul 25, 2016 11:56:06 PM
