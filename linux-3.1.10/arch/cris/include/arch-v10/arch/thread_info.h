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
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:47 PM
Mon, Jul 25, 2016  6:19:33 PM
Mon, Jul 25, 2016  7:32:49 PM
Tue, Jul 26, 2016  2:09:00 PM
