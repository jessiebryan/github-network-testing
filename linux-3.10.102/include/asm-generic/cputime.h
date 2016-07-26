#ifndef _ASM_GENERIC_CPUTIME_H
#define _ASM_GENERIC_CPUTIME_H

#include <linux/time.h>
#include <linux/jiffies.h>

#ifndef CONFIG_VIRT_CPU_ACCOUNTING
# include <asm-generic/cputime_jiffies.h>
#endif

#ifdef CONFIG_VIRT_CPU_ACCOUNTING_GEN
# include <asm-generic/cputime_nsecs.h>
#endif

#endif
Tue Jul 19 12:41:27 PDT 2016
Fri Jul 22 15:52:28 PDT 2016
Sun, Jul 24, 2016  3:00:53 PM
Mon, Jul 25, 2016  9:37:10 PM
