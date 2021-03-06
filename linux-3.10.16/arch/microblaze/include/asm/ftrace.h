#ifndef _ASM_MICROBLAZE_FTRACE
#define _ASM_MICROBLAZE_FTRACE

#ifdef CONFIG_FUNCTION_TRACER

#define MCOUNT_ADDR		((long)(_mcount))
#define MCOUNT_INSN_SIZE	8 /* sizeof mcount call */

#ifndef __ASSEMBLY__
extern void _mcount(void);
extern void ftrace_call_graph(void);
#endif

#ifdef CONFIG_DYNAMIC_FTRACE
/* reloction of mcount call site is the same as the address */
static inline unsigned long ftrace_call_adjust(unsigned long addr)
{
	return addr;
}

struct dyn_arch_ftrace {
};
#endif /* CONFIG_DYNAMIC_FTRACE */

#endif /* CONFIG_FUNCTION_TRACER */
#endif /* _ASM_MICROBLAZE_FTRACE */
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:58:59 PDT 2016
Sun, Jul 24, 2016  3:51:29 PM
Mon, Jul 25, 2016 10:33:41 PM
