#ifndef __ASM_AVR32_UCONTEXT_H
#define __ASM_AVR32_UCONTEXT_H

struct ucontext {
	unsigned long		uc_flags;
	struct ucontext	*	uc_link;
	stack_t			uc_stack;
	struct sigcontext	uc_mcontext;
	sigset_t		uc_sigmask;
};

#endif /* __ASM_AVR32_UCONTEXT_H */
Tue Jul 19 12:41:04 PDT 2016
Fri Jul 22 15:51:37 PDT 2016
Sun, Jul 24, 2016  2:55:10 PM
Mon, Jul 25, 2016  9:30:43 PM
