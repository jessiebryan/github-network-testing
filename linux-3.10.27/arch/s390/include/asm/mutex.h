/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>

#define arch_mutex_cpu_relax()	barrier()
Tue Jul 19 12:52:16 PDT 2016
Fri Jul 22 16:12:29 PDT 2016
Sun, Jul 24, 2016  5:34:20 PM
Tue, Jul 26, 2016 12:27:42 AM
