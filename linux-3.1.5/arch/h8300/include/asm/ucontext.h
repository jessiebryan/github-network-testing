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
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:07 PDT 2016
Sun, Jul 24, 2016  1:46:05 PM
Mon, Jul 25, 2016  8:12:02 PM
Tue, Jul 26, 2016  2:45:55 PM
