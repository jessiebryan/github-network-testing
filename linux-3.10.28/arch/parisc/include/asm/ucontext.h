#ifndef _ASM_PARISC_UCONTEXT_H
#define _ASM_PARISC_UCONTEXT_H

struct ucontext {
	unsigned int	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* !_ASM_PARISC_UCONTEXT_H */
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:43 PDT 2016
Sun, Jul 24, 2016  5:43:18 PM
Tue, Jul 26, 2016 12:37:36 AM
