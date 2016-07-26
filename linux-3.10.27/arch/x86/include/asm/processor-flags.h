#ifndef _ASM_X86_PROCESSOR_FLAGS_H
#define _ASM_X86_PROCESSOR_FLAGS_H

#include <uapi/asm/processor-flags.h>

#ifdef CONFIG_VM86
#define X86_VM_MASK	X86_EFLAGS_VM
#else
#define X86_VM_MASK	0 /* No VM86 support */
#endif
#endif /* _ASM_X86_PROCESSOR_FLAGS_H */
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:36 PDT 2016
Sun, Jul 24, 2016  5:35:08 PM
Tue, Jul 26, 2016 12:28:35 AM
