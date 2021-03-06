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
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:06 PM
Mon, Jul 25, 2016  8:33:20 PM
