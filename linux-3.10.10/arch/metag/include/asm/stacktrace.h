#ifndef __ASM_STACKTRACE_H
#define __ASM_STACKTRACE_H

struct stackframe {
	unsigned long fp;
	unsigned long sp;
	unsigned long lr;
	unsigned long pc;
};

struct metag_frame {
	unsigned long fp;
	unsigned long lr;
};

extern int unwind_frame(struct stackframe *frame);
extern void walk_stackframe(struct stackframe *frame,
			    int (*fn)(struct stackframe *, void *), void *data);

#endif	/* __ASM_STACKTRACE_H */
Tue Jul 19 12:39:12 PDT 2016
Fri Jul 22 15:47:56 PDT 2016
Sun, Jul 24, 2016  2:28:30 PM
Mon, Jul 25, 2016  9:00:49 PM
