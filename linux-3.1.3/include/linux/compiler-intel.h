#ifndef __LINUX_COMPILER_H
#error "Please don't include <linux/compiler-intel.h> directly, include <linux/compiler.h> instead."
#endif

#ifdef __ECC

/* Some compiler specific definitions are overwritten here
 * for Intel ECC compiler
 */

#include <asm/intrinsics.h>

/* Intel ECC compiler doesn't support gcc specific asm stmts.
 * It uses intrinsics to do the equivalent things.
 */
#undef barrier
#undef RELOC_HIDE

#define barrier() __memory_barrier()

#define RELOC_HIDE(ptr, off)					\
  ({ unsigned long __ptr;					\
     __ptr = (unsigned long) (ptr);				\
    (typeof(ptr)) (__ptr + (off)); })

/* Intel ECC compiler doesn't support __builtin_types_compatible_p() */
#define __must_be_array(a) 0

#endif

#define uninitialized_var(x) x
Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:33 PDT 2016
Sun, Jul 24, 2016  1:34:28 PM
Mon, Jul 25, 2016  7:58:18 PM
