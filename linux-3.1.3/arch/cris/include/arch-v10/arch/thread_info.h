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
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:17 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:11 PM
Tue, Jul 26, 2016  2:27:21 PM
