#ifndef _ASM_S390_FTRACE_H
#define _ASM_S390_FTRACE_H

#ifndef __ASSEMBLY__

extern void _mcount(void);

struct dyn_arch_ftrace { };

#define MCOUNT_ADDR ((long)_mcount)

#ifdef CONFIG_64BIT
#define MCOUNT_INSN_SIZE  12
#else
#define MCOUNT_INSN_SIZE  20
#endif

static inline unsigned long ftrace_call_adjust(unsigned long addr)
{
	return addr;
}

#endif /* __ASSEMBLY__ */
#endif /* _ASM_S390_FTRACE_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:22 PM
