#ifndef _LINUX_STACKPROTECTOR_H
#define _LINUX_STACKPROTECTOR_H 1

#include <linux/compiler.h>
#include <linux/sched.h>
#include <linux/random.h>

#ifdef CONFIG_CC_STACKPROTECTOR
# include <asm/stackprotector.h>
#else
static inline void boot_init_stack_canary(void)
{
}
#endif

#endif
Tue Jul 19 12:36:33 PDT 2016
Fri Jul 22 15:42:54 PDT 2016
Sun, Jul 24, 2016  1:51:41 PM
Mon, Jul 25, 2016  8:18:36 PM
