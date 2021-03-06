#ifndef _M68K_UCONTEXT_H
#define _M68K_UCONTEXT_H

typedef int greg_t;
#define NGREG 18
typedef greg_t gregset_t[NGREG];

typedef struct fpregset {
	int f_fpcntl[3];
	int f_fpregs[8*3];
} fpregset_t;

struct mcontext {
	int version;
	gregset_t gregs;
	fpregset_t fpregs;
};

#define MCONTEXT_VERSION 2

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct mcontext	  uc_mcontext;
	unsigned long	  uc_filler[80];
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:53 PM
Tue, Jul 26, 2016 12:47:04 AM
