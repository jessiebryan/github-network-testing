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
Tue Jul 19 12:43:13 PDT 2016
Fri Jul 22 15:55:22 PDT 2016
Sun, Jul 24, 2016  3:23:21 PM
Mon, Jul 25, 2016 10:02:22 PM
