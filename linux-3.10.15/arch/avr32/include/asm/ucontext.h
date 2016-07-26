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
Tue Jul 19 12:44:28 PDT 2016
Fri Jul 22 15:57:41 PDT 2016
Sun, Jul 24, 2016  3:41:17 PM
Mon, Jul 25, 2016 10:22:18 PM
