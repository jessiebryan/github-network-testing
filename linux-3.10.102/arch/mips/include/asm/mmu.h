#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:41:09 PDT 2016
Fri Jul 22 15:51:48 PDT 2016
Sun, Jul 24, 2016  2:56:28 PM
Mon, Jul 25, 2016  9:32:10 PM
