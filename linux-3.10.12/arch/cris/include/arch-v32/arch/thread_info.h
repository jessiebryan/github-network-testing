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
Tue Jul 19 12:42:33 PDT 2016
Fri Jul 22 15:54:09 PDT 2016
Sun, Jul 24, 2016  3:13:54 PM
Mon, Jul 25, 2016  9:51:51 PM
