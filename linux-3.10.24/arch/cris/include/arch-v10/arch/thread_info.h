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
Tue Jul 19 12:50:11 PDT 2016
Fri Jul 22 16:08:28 PDT 2016
Sun, Jul 24, 2016  5:04:39 PM
Mon, Jul 25, 2016 11:54:55 PM
