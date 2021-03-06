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
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:44 PDT 2016
Sun, Jul 24, 2016  1:21:06 PM
Mon, Jul 25, 2016  6:29:30 PM
Mon, Jul 25, 2016  7:42:35 PM
Tue, Jul 26, 2016  2:18:18 PM
