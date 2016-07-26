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
Tue Jul 19 12:49:36 PDT 2016
Fri Jul 22 16:07:21 PDT 2016
Sun, Jul 24, 2016  4:56:02 PM
Mon, Jul 25, 2016 11:45:29 PM
