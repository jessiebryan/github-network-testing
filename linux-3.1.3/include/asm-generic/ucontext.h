#ifndef __ASM_GENERIC_UCONTEXT_H
#define __ASM_GENERIC_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* __ASM_GENERIC_UCONTEXT_H */
Tue Jul 19 12:35:20 PDT 2016
Fri Jul 22 15:40:31 PDT 2016
Sun, Jul 24, 2016  1:34:18 PM
Mon, Jul 25, 2016  7:58:06 PM
Tue, Jul 26, 2016  2:32:54 PM
