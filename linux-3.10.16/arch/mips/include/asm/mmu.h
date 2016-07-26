#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned long asid[NR_CPUS];
	void *vdso;
} mm_context_t;

#endif /* __ASM_MMU_H */
Tue Jul 19 12:45:12 PDT 2016
Fri Jul 22 15:59:01 PDT 2016
Sun, Jul 24, 2016  3:51:47 PM
Mon, Jul 25, 2016 10:34:00 PM
