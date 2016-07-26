/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */

#include <asm-generic/mutex-dec.h>
Tue Jul 19 12:52:52 PDT 2016
Fri Jul 22 16:13:40 PDT 2016
Sun, Jul 24, 2016  5:42:56 PM
Tue, Jul 26, 2016 12:37:11 AM
