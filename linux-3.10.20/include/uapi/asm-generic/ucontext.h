#ifndef __ASM_GENERIC_UCONTEXT_H
#define __ASM_GENERIC_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* __ASM_GENERIC_UCONTEXT_H */
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:33 PDT 2016
Sun, Jul 24, 2016  4:34:43 PM
Mon, Jul 25, 2016 11:21:43 PM
