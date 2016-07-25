#ifndef __ARCH_SPARC64_PERCPU__
#define __ARCH_SPARC64_PERCPU__

#include <linux/compiler.h>

register unsigned long __local_per_cpu_offset asm("g5");

#ifdef CONFIG_SMP

#include <asm/trap_block.h>

#define __per_cpu_offset(__cpu) \
	(trap_block[(__cpu)].__per_cpu_base)
#define per_cpu_offset(x) (__per_cpu_offset(x))

#define __my_cpu_offset __local_per_cpu_offset

#else /* ! SMP */

#endif	/* SMP */

#include <asm-generic/percpu.h>

#endif /* __ARCH_SPARC64_PERCPU__ */
Tue Jul 19 12:49:42 PDT 2016
Fri Jul 22 16:07:32 PDT 2016
Sun, Jul 24, 2016  4:57:28 PM
