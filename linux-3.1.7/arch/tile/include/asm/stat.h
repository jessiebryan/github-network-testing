#if defined(__KERNEL__) && defined(CONFIG_COMPAT)
#define __ARCH_WANT_STAT64	/* Used for compat_sys_stat64() etc. */
#endif
#include <asm-generic/stat.h>
Tue Jul 19 12:36:50 PDT 2016
Fri Jul 22 15:43:29 PDT 2016
