#ifndef ___ASM_SPARC_UACCESS_H
#define ___ASM_SPARC_UACCESS_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/uaccess_64.h>
#else
#include <asm/uaccess_32.h>
#endif

#define user_addr_max() \
	(segment_eq(get_fs(), USER_DS) ? TASK_SIZE : ~0UL)

extern long strncpy_from_user(char *dest, const char __user *src, long count);

#endif
Tue Jul 19 12:48:25 PDT 2016
Fri Jul 22 16:05:07 PDT 2016
Sun, Jul 24, 2016  4:39:03 PM
Mon, Jul 25, 2016 11:26:32 PM
