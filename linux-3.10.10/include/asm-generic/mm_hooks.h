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
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:37 PDT 2016
Sun, Jul 24, 2016  2:33:17 PM
Mon, Jul 25, 2016  9:06:08 PM
