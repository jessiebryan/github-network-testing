/*
 * Define generic no-op hooks for arch_dup_mmap and arch_exit_mmap, to
 * be included in asm-FOO/mmu_context.h for any arch FOO which doesn't
 * need to hook these.
 */
#ifndef _ASM_GENERIC_MM_HOOKS_H
#define _ASM_GENERIC_MM_HOOKS_H

static inline void arch_dup_mmap(struct mm_struct *oldmm,
				 struct mm_struct *mm)
{
}

static inline void arch_exit_mmap(struct mm_struct *mm)
{
}

#endif	/* _ASM_GENERIC_MM_HOOKS_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:01 PM
Mon, Jul 25, 2016  6:35:25 PM
Mon, Jul 25, 2016  7:48:21 PM
Tue, Jul 26, 2016  2:23:44 PM
