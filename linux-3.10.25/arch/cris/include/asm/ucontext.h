#ifndef _ASM_CRIS_UCONTEXT_H
#define _ASM_CRIS_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* !_ASM_CRIS_UCONTEXT_H */
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:43 PDT 2016
Sun, Jul 24, 2016  5:14:05 PM
Tue, Jul 26, 2016 12:05:20 AM
