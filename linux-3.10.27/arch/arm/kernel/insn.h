#ifndef __ASM_ARM_INSN_H
#define __ASM_ARM_INSN_H

static inline unsigned long
arm_gen_nop(void)
{
#ifdef CONFIG_THUMB2_KERNEL
	return 0xf3af8000; /* nop.w */
#else
	return 0xe1a00000; /* mov r0, r0 */
#endif
}

unsigned long
__arm_gen_branch(unsigned long pc, unsigned long addr, bool link);

static inline unsigned long
arm_gen_branch(unsigned long pc, unsigned long addr)
{
	return __arm_gen_branch(pc, addr, false);
}

static inline unsigned long
arm_gen_branch_link(unsigned long pc, unsigned long addr)
{
	return __arm_gen_branch(pc, addr, true);
}

#endif
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:07 PDT 2016
Sun, Jul 24, 2016  5:31:38 PM
Tue, Jul 26, 2016 12:24:43 AM
