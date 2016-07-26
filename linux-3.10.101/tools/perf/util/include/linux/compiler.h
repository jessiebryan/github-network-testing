#ifndef _PERF_LINUX_COMPILER_H_
#define _PERF_LINUX_COMPILER_H_

#ifndef __always_inline
#define __always_inline	inline
#endif
#define __user
#ifndef __attribute_const__
#define __attribute_const__
#endif

#ifndef __maybe_unused
#define __maybe_unused		__attribute__((unused))
#endif
#define __packed	__attribute__((__packed__))

#ifndef __force
#define __force
#endif

#endif
Tue Jul 19 12:40:59 PDT 2016
Fri Jul 22 15:51:28 PDT 2016
Sun, Jul 24, 2016  2:54:09 PM
Mon, Jul 25, 2016  9:29:33 PM
