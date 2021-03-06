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
Tue Jul 19 12:41:40 PDT 2016
Fri Jul 22 15:52:48 PDT 2016
Sun, Jul 24, 2016  3:03:30 PM
Mon, Jul 25, 2016  9:40:06 PM
