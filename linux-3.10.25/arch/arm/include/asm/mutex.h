/*
 * arch/arm/include/asm/mutex.h
 *
 * ARM optimized mutex locking primitives
 *
 * Please look into asm-generic/mutex-xchg.h for a formal definition.
 */
#ifndef _ASM_MUTEX_H
#define _ASM_MUTEX_H
/*
 * On pre-ARMv6 hardware this results in a swp-based implementation,
 * which is the most efficient. For ARMv6+, we have exclusive memory
 * accessors and use atomic_dec to avoid the extra xchg operations
 * on the locking slowpaths.
 */
#if __LINUX_ARM_ARCH__ < 6
#include <asm-generic/mutex-xchg.h>
#else
#include <asm-generic/mutex-dec.h>
#endif
#endif	/* _ASM_MUTEX_H */
Tue Jul 19 12:50:46 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:57 PM
Tue, Jul 26, 2016 12:04:05 AM
