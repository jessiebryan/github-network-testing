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
Tue Jul 19 12:48:17 PDT 2016
Fri Jul 22 16:04:52 PDT 2016
Sun, Jul 24, 2016  4:37:09 PM
Mon, Jul 25, 2016 11:24:25 PM
