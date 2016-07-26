#ifndef _ASM_IA64_BUG_H
#define _ASM_IA64_BUG_H

#ifdef CONFIG_BUG
#define ia64_abort()	__builtin_trap()
#define BUG() do { printk("kernel BUG at %s:%d!\n", __FILE__, __LINE__); ia64_abort(); } while (0)

/* should this BUG be made generic? */
#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>

#endif
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:05 PM
Mon, Jul 25, 2016  6:19:55 PM
Mon, Jul 25, 2016  7:33:11 PM
