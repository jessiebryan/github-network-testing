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
Tue Jul 19 12:39:32 PDT 2016
Fri Jul 22 15:48:37 PDT 2016
Sun, Jul 24, 2016  2:33:19 PM
Mon, Jul 25, 2016  9:06:10 PM
