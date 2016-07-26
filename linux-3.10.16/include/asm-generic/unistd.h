#include <uapi/asm-generic/unistd.h>
#include <linux/export.h>

/*
 * These are required system calls, we should
 * invert the logic eventually and let them
 * be selected by default.
 */
#if __BITS_PER_LONG == 32
#define __ARCH_WANT_STAT64
#define __ARCH_WANT_SYS_LLSEEK
#endif
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:36 PDT 2016
Sun, Jul 24, 2016  3:56:16 PM
Mon, Jul 25, 2016 10:38:59 PM
