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
Tue Jul 19 12:45:09 PDT 2016
Fri Jul 22 15:58:55 PDT 2016
Sun, Jul 24, 2016  3:51:01 PM
Mon, Jul 25, 2016 10:33:09 PM
