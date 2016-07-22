#ifndef _PERF_LINUX_COMPILER_H_
#define _PERF_LINUX_COMPILER_H_

#ifndef __always_inline
#define __always_inline	inline
#endif
#define __user
#ifndef __attribute_const__
#define __attribute_const__
#endif

#define __used		__attribute__((__unused__))

#endif
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:08 PDT 2016
