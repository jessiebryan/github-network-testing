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
Tue Jul 19 12:43:53 PDT 2016
Fri Jul 22 15:56:36 PDT 2016
Sun, Jul 24, 2016  3:32:58 PM
Mon, Jul 25, 2016 10:13:05 PM
