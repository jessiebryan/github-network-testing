#ifndef _ASM_POWERPC_PERCPU_H_
#define _ASM_POWERPC_PERCPU_H_
#ifdef __powerpc64__

/*
 * Same as asm-generic/percpu.h, except that we store the per cpu offset
 * in the paca. Based on the x86-64 implementation.
 */

#ifdef CONFIG_SMP

#include <asm/paca.h>

#define __my_cpu_offset local_paca->data_offset

#endif /* CONFIG_SMP */
#endif /* __powerpc64__ */

#include <asm-generic/percpu.h>

#endif /* _ASM_POWERPC_PERCPU_H_ */
Tue Jul 19 12:51:37 PDT 2016
Fri Jul 22 16:11:10 PDT 2016
Sun, Jul 24, 2016  5:24:50 PM
Tue, Jul 26, 2016 12:17:13 AM
