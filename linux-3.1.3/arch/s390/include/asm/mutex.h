/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>

#define arch_mutex_cpu_relax()	barrier()
Tue Jul 19 12:34:58 PDT 2016
Fri Jul 22 15:40:03 PDT 2016
Sun, Jul 24, 2016  1:30:54 PM
Mon, Jul 25, 2016  7:54:04 PM
Tue, Jul 26, 2016  2:29:09 PM
