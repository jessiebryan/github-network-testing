#ifndef _ASM_UCONTEXT_H
#define _ASM_UCONTEXT_H

struct ucontext {
	unsigned long		uc_flags;
	struct ucontext		*uc_link;
	stack_t			uc_stack;
	struct sigcontext	uc_mcontext;
	sigset_t		uc_sigmask;	/* mask last for extensibility */
};

#endif
Tue Jul 19 12:47:38 PDT 2016
Fri Jul 22 16:03:40 PDT 2016
Sun, Jul 24, 2016  4:27:51 PM
Mon, Jul 25, 2016 11:14:04 PM
