#ifndef __H8300_MMU_CONTEXT_H
#define __H8300_MMU_CONTEXT_H

#include <asm/setup.h>
#include <asm/page.h>
#include <asm/pgalloc.h>
#include <asm-generic/mm_hooks.h>

static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
{
}

static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
{
	// mm->context = virt_to_phys(mm->pgd);
	return(0);
}

#define destroy_context(mm)		do { } while(0)
#define deactivate_mm(tsk,mm)           do { } while(0)

static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next, struct task_struct *tsk)
{
}

static inline void activate_mm(struct mm_struct *prev_mm,
			       struct mm_struct *next_mm)
{
}

#endif
Tue Jul 19 12:52:09 PDT 2016
Fri Jul 22 16:12:17 PDT 2016
Sun, Jul 24, 2016  5:32:50 PM
Tue, Jul 26, 2016 12:26:03 AM
