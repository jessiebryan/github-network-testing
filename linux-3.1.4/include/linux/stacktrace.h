#ifndef __LINUX_STACKTRACE_H
#define __LINUX_STACKTRACE_H

struct task_struct;
struct pt_regs;

#ifdef CONFIG_STACKTRACE
struct task_struct;

struct stack_trace {
	unsigned int nr_entries, max_entries;
	unsigned long *entries;
	int skip;	/* input argument: How many entries to skip */
};

extern void save_stack_trace(struct stack_trace *trace);
extern void save_stack_trace_regs(struct pt_regs *regs,
				  struct stack_trace *trace);
extern void save_stack_trace_tsk(struct task_struct *tsk,
				struct stack_trace *trace);

extern void print_stack_trace(struct stack_trace *trace, int spaces);

#ifdef CONFIG_USER_STACKTRACE_SUPPORT
extern void save_stack_trace_user(struct stack_trace *trace);
#else
# define save_stack_trace_user(trace)              do { } while (0)
#endif

#else
# define save_stack_trace(trace)			do { } while (0)
# define save_stack_trace_tsk(tsk, trace)		do { } while (0)
# define save_stack_trace_user(trace)			do { } while (0)
# define print_stack_trace(trace, spaces)		do { } while (0)
#endif

#endif
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:26 PM
Mon, Jul 25, 2016  8:08:53 PM
Tue, Jul 26, 2016  2:43:00 PM
