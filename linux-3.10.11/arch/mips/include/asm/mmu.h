#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:41:51 PDT 2016
Fri Jul 22 15:53:06 PDT 2016
Sun, Jul 24, 2016  3:05:41 PM
Mon, Jul 25, 2016  9:42:34 PM
