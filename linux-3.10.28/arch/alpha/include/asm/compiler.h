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
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:40 PM
Tue, Jul 26, 2016 12:34:41 AM
