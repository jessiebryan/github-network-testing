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
Tue Jul 19 12:37:19 PDT 2016
Fri Jul 22 15:44:23 PDT 2016
Sun, Jul 24, 2016  2:02:47 PM
Mon, Jul 25, 2016  8:31:46 PM
