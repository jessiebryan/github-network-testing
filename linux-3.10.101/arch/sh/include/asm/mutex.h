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
Tue Jul 19 12:40:34 PDT 2016
Fri Jul 22 15:50:39 PDT 2016
Sun, Jul 24, 2016  2:48:07 PM
Mon, Jul 25, 2016  9:22:46 PM
