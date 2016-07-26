#ifndef __ALPHA_PERCPU_H
#define __ALPHA_PERCPU_H

/*
 * To calculate addresses of locally defined variables, GCC uses
 * 32-bit displacement from the GP. Which doesn't work for per cpu
 * variables in modules, as an offset to the kernel per cpu area is
 * way above 4G.
 *
 * Always use weak definitions for percpu variables in modules.
 */
#if defined(MODULE) && defined(CONFIG_SMP)
#define ARCH_NEEDS_WEAK_PER_CPU
#endif

#include <asm-generic/percpu.h>

#endif /* __ALPHA_PERCPU_H */
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:38 PDT 2016
Sun, Jul 24, 2016  1:27:58 PM
Mon, Jul 25, 2016  6:37:45 PM
Mon, Jul 25, 2016  7:50:39 PM
