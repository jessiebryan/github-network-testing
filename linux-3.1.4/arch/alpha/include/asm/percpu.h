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
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:13 PM
Mon, Jul 25, 2016  8:00:23 PM
Tue, Jul 26, 2016  2:35:01 PM
