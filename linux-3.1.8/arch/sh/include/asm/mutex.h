/*
 * Pull in the generic implementation for the mutex fastpath.
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */
#if defined(CONFIG_CPU_SH4A)
#include <asm/mutex-llsc.h>
#else
#include <asm-generic/mutex-dec.h>
#endif
Tue Jul 19 12:37:24 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:03 PM
Mon, Jul 25, 2016  8:33:16 PM
