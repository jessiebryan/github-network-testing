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
Tue Jul 19 12:48:38 PDT 2016
Fri Jul 22 16:05:33 PDT 2016
Sun, Jul 24, 2016  4:42:21 PM
Mon, Jul 25, 2016 11:30:11 PM
