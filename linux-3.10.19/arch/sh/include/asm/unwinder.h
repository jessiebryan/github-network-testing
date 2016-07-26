#ifndef _LINUX_UNWINDER_H
#define _LINUX_UNWINDER_H

#include <asm/stacktrace.h>

struct unwinder {
	const char *name;
	struct list_head list;
	int rating;
	void (*dump)(struct task_struct *, struct pt_regs *,
		     unsigned long *, const struct stacktrace_ops *, void *);
};

extern int unwinder_init(void);
extern int unwinder_register(struct unwinder *);

extern void unwind_stack(struct task_struct *, struct pt_regs *,
			 unsigned long *, const struct stacktrace_ops *,
			 void *);

extern void stack_reader_dump(struct task_struct *, struct pt_regs *,
			      unsigned long *, const struct stacktrace_ops *,
			      void *);

/*
 * Used by fault handling code to signal to the unwinder code that it
 * should switch to a different unwinder.
 */
extern int unwinder_faulted;

#endif /* _LINUX_UNWINDER_H */
Tue Jul 19 12:47:08 PDT 2016
Fri Jul 22 16:02:42 PDT 2016
Sun, Jul 24, 2016  4:20:21 PM
Mon, Jul 25, 2016 11:05:47 PM
