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
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:30 PM
Mon, Jul 25, 2016  9:17:30 PM
