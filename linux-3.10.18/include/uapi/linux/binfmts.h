#ifndef _UAPI_LINUX_BINFMTS_H
#define _UAPI_LINUX_BINFMTS_H

#include <linux/capability.h>

struct pt_regs;

/*
 * These are the maximum length and maximum number of strings passed to the
 * execve() system call.  MAX_ARG_STRLEN is essentially random but serves to
 * prevent the kernel from being unduly impacted by misaddressed pointers.
 * MAX_ARG_STRINGS is chosen to fit in a signed 32-bit integer.
 */
#define MAX_ARG_STRLEN (PAGE_SIZE * 32)
#define MAX_ARG_STRINGS 0x7FFFFFFF

/* sizeof(linux_binprm->buf) */
#define BINPRM_BUF_SIZE 128

#endif /* _UAPI_LINUX_BINFMTS_H */
Tue Jul 19 12:46:51 PDT 2016
Fri Jul 22 16:02:10 PDT 2016
Sun, Jul 24, 2016  4:16:16 PM
Mon, Jul 25, 2016 11:01:15 PM
