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
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:28 PDT 2016
Sun, Jul 24, 2016  4:34:10 PM
Mon, Jul 25, 2016 11:21:06 PM
