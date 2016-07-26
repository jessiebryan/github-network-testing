#ifndef _ASM_X86_MATH_EMU_H
#define _ASM_X86_MATH_EMU_H

#include <asm/ptrace.h>
#include <asm/vm86.h>

/* This structure matches the layout of the data saved to the stack
   following a device-not-present interrupt, part of it saved
   automatically by the 80386/80486.
   */
struct math_emu_info {
	long ___orig_eip;
	union {
		struct pt_regs *regs;
		struct kernel_vm86_regs *vm86;
	};
};
#endif /* _ASM_X86_MATH_EMU_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:53 PM
Mon, Jul 25, 2016  8:04:43 PM
