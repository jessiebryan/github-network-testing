#ifndef _ASM_M32R_UCONTEXT_H
#define _ASM_M32R_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* _ASM_M32R_UCONTEXT_H */
Tue Jul 19 12:52:50 PDT 2016
Fri Jul 22 16:13:35 PDT 2016
Sun, Jul 24, 2016  5:42:25 PM
Tue, Jul 26, 2016 12:36:37 AM
