#ifndef _ASM_METAG_FTRACE
#define _ASM_METAG_FTRACE

#ifdef CONFIG_FUNCTION_TRACER
#define MCOUNT_INSN_SIZE	8 /* sizeof mcount call */

#ifndef __ASSEMBLY__
extern void mcount_wrapper(void);
#define MCOUNT_ADDR		((long)(mcount_wrapper))

static inline unsigned long ftrace_call_adjust(unsigned long addr)
{
	return addr;
}

struct dyn_arch_ftrace {
	/* No extra data needed on metag */
};
#endif /* __ASSEMBLY__ */

#endif /* CONFIG_FUNCTION_TRACER */

#endif /* _ASM_METAG_FTRACE */
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:03 PDT 2016
Sun, Jul 24, 2016  5:23:58 PM
Tue, Jul 26, 2016 12:16:16 AM
