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
Tue Jul 19 12:40:26 PDT 2016
Fri Jul 22 15:50:25 PDT 2016
Sun, Jul 24, 2016  2:46:25 PM
Mon, Jul 25, 2016  9:20:48 PM
