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
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:03 PDT 2016
Sun, Jul 24, 2016  1:38:03 PM
Mon, Jul 25, 2016  8:02:32 PM
Tue, Jul 26, 2016  2:37:03 PM
