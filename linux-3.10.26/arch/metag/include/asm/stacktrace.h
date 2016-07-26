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
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:04 PDT 2016
Sun, Jul 24, 2016  5:23:59 PM
Tue, Jul 26, 2016 12:16:17 AM
