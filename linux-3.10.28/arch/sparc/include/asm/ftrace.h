#ifndef _ASM_SPARC64_FTRACE
#define _ASM_SPARC64_FTRACE

#ifdef CONFIG_MCOUNT
#define MCOUNT_ADDR		((long)(_mcount))
#define MCOUNT_INSN_SIZE	4 /* sizeof mcount call */

#ifndef __ASSEMBLY__
extern void _mcount(void);
#endif

#endif

#ifdef CONFIG_DYNAMIC_FTRACE
/* reloction of mcount call site is the same as the address */
static inline unsigned long ftrace_call_adjust(unsigned long addr)
{
	return addr;
}

struct dyn_arch_ftrace {
};
#endif /*  CONFIG_DYNAMIC_FTRACE */

#endif /* _ASM_SPARC64_FTRACE */
Tue Jul 19 12:52:56 PDT 2016
Fri Jul 22 16:13:48 PDT 2016
Sun, Jul 24, 2016  5:43:58 PM
Tue, Jul 26, 2016 12:38:20 AM
