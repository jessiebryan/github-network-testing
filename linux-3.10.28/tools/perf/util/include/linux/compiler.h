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
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:36 PDT 2016
Sun, Jul 24, 2016  5:49:56 PM
Tue, Jul 26, 2016 12:44:52 AM
