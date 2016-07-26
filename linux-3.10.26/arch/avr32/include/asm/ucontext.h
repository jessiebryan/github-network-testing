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
Tue Jul 19 12:51:29 PDT 2016
Fri Jul 22 16:10:55 PDT 2016
Sun, Jul 24, 2016  5:23:01 PM
Tue, Jul 26, 2016 12:15:13 AM
