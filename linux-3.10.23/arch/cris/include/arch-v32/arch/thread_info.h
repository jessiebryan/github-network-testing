#ifndef _ASM_CRIS_ARCH_THREAD_INFO_H
#define _ASM_CRIS_ARCH_THREAD_INFO_H

/* Return a thread_info struct. */
static inline struct thread_info *current_thread_info(void)
{
	struct thread_info *ti;

	__asm__ __volatile__ ("and.d $sp, %0" : "=r" (ti) : "0" (~8191UL));
	return ti;
}

#endif /* _ASM_CRIS_ARCH_THREAD_INFO_H */
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:16 PDT 2016
