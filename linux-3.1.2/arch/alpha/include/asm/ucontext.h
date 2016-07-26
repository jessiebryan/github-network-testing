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
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:44 PM
Mon, Jul 25, 2016  6:27:53 PM
Mon, Jul 25, 2016  7:41:00 PM
Tue, Jul 26, 2016  2:16:45 PM
