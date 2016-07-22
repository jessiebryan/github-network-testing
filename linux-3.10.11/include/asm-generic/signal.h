#ifndef __ASM_GENERIC_SIGNAL_H
#define __ASM_GENERIC_SIGNAL_H

#include <uapi/asm-generic/signal.h>

#ifndef __ASSEMBLY__
#ifdef SA_RESTORER
#endif

#include <asm/sigcontext.h>
#undef __HAVE_ARCH_SIG_BITOPS

#endif /* __ASSEMBLY__ */
#endif /* _ASM_GENERIC_SIGNAL_H */
Tue Jul 19 12:42:16 PDT 2016
Fri Jul 22 15:53:41 PDT 2016
