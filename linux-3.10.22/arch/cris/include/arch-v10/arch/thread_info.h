#ifndef _ASM_ARCH_THREAD_INFO_H
#define _ASM_ARCH_THREAD_INFO_H

/* how to get the thread information struct from C */
static inline struct thread_info *current_thread_info(void)
{
	struct thread_info *ti;
        __asm__("and.d $sp,%0; ":"=r" (ti) : "0" (~8191UL));
        return ti;
}

#endif
Tue Jul 19 12:48:53 PDT 2016
Fri Jul 22 16:06:02 PDT 2016
Sun, Jul 24, 2016  4:46:05 PM
Mon, Jul 25, 2016 11:34:23 PM
