#ifndef __LINUX_COMPILER_H
#error "Please don't include <linux/compiler-gcc3.h> directly, include <linux/compiler.h> instead."
#endif

#if GCC_VERSION < 30200
# error Sorry, your compiler is too old - please upgrade it.
#endif

#if GCC_VERSION >= 30300
# define __used			__attribute__((__used__))
#else
# define __used			__attribute__((__unused__))
#endif

#if GCC_VERSION >= 30400
#define __must_check		__attribute__((warn_unused_result))
#endif

#ifdef CONFIG_GCOV_KERNEL
# if GCC_VERSION < 30400
#   error "GCOV profiling support for gcc versions below 3.4 not included"
# endif /* __GNUC_MINOR__ */
#endif /* CONFIG_GCOV_KERNEL */
Tue Jul 19 12:42:57 PDT 2016
Fri Jul 22 15:54:53 PDT 2016
Sun, Jul 24, 2016  3:19:31 PM
Mon, Jul 25, 2016  9:58:08 PM
