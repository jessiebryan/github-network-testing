/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>
Tue Jul 19 12:45:44 PDT 2016
Fri Jul 22 16:00:06 PDT 2016
Sun, Jul 24, 2016  4:00:13 PM
Mon, Jul 25, 2016 10:43:22 PM
