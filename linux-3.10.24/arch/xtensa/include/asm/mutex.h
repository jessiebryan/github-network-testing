/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:50 PDT 2016
Sun, Jul 24, 2016  5:07:23 PM
Mon, Jul 25, 2016 11:57:58 PM
