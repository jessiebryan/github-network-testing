#ifndef __LINUX_COMPILER_H
#error "Please don't include <linux/compiler-gcc3.h> directly, include <linux/compiler.h> instead."
#endif

#if __GNUC_MINOR__ < 2
# error Sorry, your compiler is too old - please upgrade it.
#endif

#if __GNUC_MINOR__ >= 3
# define __used			__attribute__((__used__))
#else
# define __used			__attribute__((__unused__))
#endif

#if __GNUC_MINOR__ >= 4
#define __must_check		__attribute__((warn_unused_result))
#endif

#ifdef CONFIG_GCOV_KERNEL
# if __GNUC_MINOR__ < 4
#   error "GCOV profiling support for gcc versions below 3.4 not included"
# endif /* __GNUC_MINOR__ */
#endif /* CONFIG_GCOV_KERNEL */
Tue Jul 19 12:37:04 PDT 2016
Fri Jul 22 15:43:54 PDT 2016
Sun, Jul 24, 2016  1:59:12 PM
Mon, Jul 25, 2016  8:27:31 PM
