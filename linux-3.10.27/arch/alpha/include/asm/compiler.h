#ifndef __ALPHA_COMPILER_H
#define __ALPHA_COMPILER_H

#include <uapi/asm/compiler.h>

/* Some idiots over in <linux/compiler.h> thought inline should imply
   always_inline.  This breaks stuff.  We'll include this file whenever
   we run into such problems.  */

#include <linux/compiler.h>
#undef inline
#undef __inline__
#undef __inline
#undef __always_inline
#define __always_inline		inline __attribute__((always_inline))

#endif /* __ALPHA_COMPILER_H */
Tue Jul 19 12:52:03 PDT 2016
Fri Jul 22 16:12:05 PDT 2016
Sun, Jul 24, 2016  5:31:22 PM
Tue, Jul 26, 2016 12:24:25 AM
