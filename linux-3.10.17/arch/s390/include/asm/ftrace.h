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
Tue Jul 19 12:45:50 PDT 2016
Fri Jul 22 16:00:17 PDT 2016
Sun, Jul 24, 2016  4:01:41 PM
Mon, Jul 25, 2016 10:45:02 PM
