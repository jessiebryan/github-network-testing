#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:38:35 PDT 2016
Fri Jul 22 15:46:42 PDT 2016
Sun, Jul 24, 2016  2:19:38 PM
Mon, Jul 25, 2016  8:50:55 PM
