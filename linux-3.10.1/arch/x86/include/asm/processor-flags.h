#ifndef _ASM_X86_PROCESSOR_FLAGS_H
#define _ASM_X86_PROCESSOR_FLAGS_H

#include <uapi/asm/processor-flags.h>

#ifdef CONFIG_VM86
#define X86_VM_MASK	X86_EFLAGS_VM
#else
#define X86_VM_MASK	0 /* No VM86 support */
#endif
#endif /* _ASM_X86_PROCESSOR_FLAGS_H */
Tue Jul 19 12:38:41 PDT 2016
Fri Jul 22 15:46:54 PDT 2016
Sun, Jul 24, 2016  2:21:07 PM
Mon, Jul 25, 2016  8:52:35 PM
