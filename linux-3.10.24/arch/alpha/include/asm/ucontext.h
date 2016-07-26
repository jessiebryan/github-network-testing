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
Tue Jul 19 12:50:07 PDT 2016
Fri Jul 22 16:08:19 PDT 2016
Sun, Jul 24, 2016  5:03:32 PM
Mon, Jul 25, 2016 11:53:40 PM
