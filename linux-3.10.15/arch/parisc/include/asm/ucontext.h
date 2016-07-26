#ifndef _ASM_PARISC_UCONTEXT_H
#define _ASM_PARISC_UCONTEXT_H

struct ucontext {
	unsigned int	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* !_ASM_PARISC_UCONTEXT_H */
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:54 PDT 2016
Sun, Jul 24, 2016  3:42:57 PM
Mon, Jul 25, 2016 10:24:09 PM
