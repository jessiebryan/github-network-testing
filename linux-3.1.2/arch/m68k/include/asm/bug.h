#ifndef _M68K_BUG_H
#define _M68K_BUG_H

#ifdef CONFIG_MMU
#ifdef CONFIG_BUG
#ifdef CONFIG_DEBUG_BUGVERBOSE
#ifndef CONFIG_SUN3
#define BUG() do { \
	printk("kernel BUG at %s:%d!\n", __FILE__, __LINE__); \
	__builtin_trap(); \
} while (0)
#else
#define BUG() do { \
	printk("kernel BUG at %s:%d!\n", __FILE__, __LINE__); \
	panic("BUG!"); \
} while (0)
#endif
#else
#define BUG() do { \
	__builtin_trap(); \
} while (0)
#endif

#define HAVE_ARCH_BUG
#endif
#endif /* CONFIG_MMU */

#include <asm-generic/bug.h>

#endif
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:33 PM
Mon, Jul 25, 2016  6:30:03 PM
Mon, Jul 25, 2016  7:43:08 PM
Tue, Jul 26, 2016  2:18:49 PM
