/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>

#define arch_mutex_cpu_relax()	barrier()
Tue Jul 19 12:51:37 PDT 2016
Fri Jul 22 16:11:12 PDT 2016
Sun, Jul 24, 2016  5:25:01 PM
Tue, Jul 26, 2016 12:17:26 AM
