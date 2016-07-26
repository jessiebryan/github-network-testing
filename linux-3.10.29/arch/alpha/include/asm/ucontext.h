#ifndef _ASMAXP_UCONTEXT_H
#define _ASMAXP_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	old_sigset_t	  uc_osf_sigmask;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* !_ASMAXP_UCONTEXT_H */
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:36 PDT 2016
Sun, Jul 24, 2016  5:50:03 PM
Tue, Jul 26, 2016 12:45:00 AM
