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
Tue Jul 19 12:39:47 PDT 2016
Fri Jul 22 15:49:08 PDT 2016
Sun, Jul 24, 2016  2:37:07 PM
