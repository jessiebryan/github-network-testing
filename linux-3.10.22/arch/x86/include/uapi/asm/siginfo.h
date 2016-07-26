#ifndef _ASM_X86_SIGINFO_H
#define _ASM_X86_SIGINFO_H

#ifdef __x86_64__
# ifdef __ILP32__ /* x32 */
typedef long long __kernel_si_clock_t __attribute__((aligned(4)));
#  define __ARCH_SI_CLOCK_T		__kernel_si_clock_t
#  define __ARCH_SI_ATTRIBUTES		__attribute__((aligned(8)))
# else /* x86-64 */
#  define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
# endif
#endif

#include <asm-generic/siginfo.h>

#endif /* _ASM_X86_SIGINFO_H */
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:23 PDT 2016
Sun, Jul 24, 2016  4:48:44 PM
Mon, Jul 25, 2016 11:37:20 PM
