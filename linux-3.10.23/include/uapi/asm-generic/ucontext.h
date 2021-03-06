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
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:11 PDT 2016
Sun, Jul 24, 2016  5:02:28 PM
Mon, Jul 25, 2016 11:52:32 PM
