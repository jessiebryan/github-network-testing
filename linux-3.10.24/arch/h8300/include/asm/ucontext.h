#ifndef _H8300_UCONTEXT_H
#define _H8300_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif
Tue Jul 19 12:50:12 PDT 2016
Fri Jul 22 16:08:31 PDT 2016
Sun, Jul 24, 2016  5:04:57 PM
Mon, Jul 25, 2016 11:55:15 PM
