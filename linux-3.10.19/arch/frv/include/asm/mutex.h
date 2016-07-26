/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>
Tue Jul 19 12:47:00 PDT 2016
Fri Jul 22 16:02:28 PDT 2016
Sun, Jul 24, 2016  4:18:34 PM
Mon, Jul 25, 2016 11:03:48 PM
