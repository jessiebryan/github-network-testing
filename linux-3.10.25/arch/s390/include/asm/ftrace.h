#ifndef _ASM_S390_FTRACE_H
#define _ASM_S390_FTRACE_H

#ifndef __ASSEMBLY__

extern void _mcount(void);

struct dyn_arch_ftrace { };

#define MCOUNT_ADDR ((long)_mcount)


static inline unsigned long ftrace_call_adjust(unsigned long addr)
{
	return addr;
}

#endif /* __ASSEMBLY__ */

#ifdef CONFIG_64BIT
#define MCOUNT_INSN_SIZE  12
#else
#define MCOUNT_INSN_SIZE  22
#endif

#endif /* _ASM_S390_FTRACE_H */
Tue Jul 19 12:50:58 PDT 2016
Fri Jul 22 16:09:56 PDT 2016
Sun, Jul 24, 2016  5:15:42 PM
Tue, Jul 26, 2016 12:07:10 AM
