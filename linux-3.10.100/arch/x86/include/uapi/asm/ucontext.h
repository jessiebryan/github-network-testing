#ifndef _ASM_X86_UCONTEXT_H
#define _ASM_X86_UCONTEXT_H

#define UC_FP_XSTATE	0x1	/* indicates the presence of extended state
				 * information in the memory layout pointed
				 * by the fpstate pointer in the ucontext's
				 * sigcontext struct (uc_mcontext).
				 */

#include <asm-generic/ucontext.h>

#endif /* _ASM_X86_UCONTEXT_H */
Tue Jul 19 12:39:58 PDT 2016
Fri Jul 22 15:49:29 PDT 2016
Sun, Jul 24, 2016  2:39:37 PM
Mon, Jul 25, 2016  9:13:11 PM
