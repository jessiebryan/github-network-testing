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
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:58 PDT 2016
Sun, Jul 24, 2016  4:30:08 PM
Mon, Jul 25, 2016 11:16:37 PM
