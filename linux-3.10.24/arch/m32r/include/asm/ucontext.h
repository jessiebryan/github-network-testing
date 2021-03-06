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
Tue Jul 19 12:50:13 PDT 2016
Fri Jul 22 16:08:33 PDT 2016
Sun, Jul 24, 2016  5:05:13 PM
Mon, Jul 25, 2016 11:55:32 PM
